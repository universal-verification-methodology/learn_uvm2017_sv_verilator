#!/bin/bash

# Verilator with UVM 2017 Installation Script
# Installs Verilator from source and downloads/sets up Accellera UVM 2017-1.0
# Based on: https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator
# Usage: ./installation.sh [OPTIONS]

set -euo pipefail

# Colors for output
RED='\033[0;31m'
GREEN='\033[0;32m'
YELLOW='\033[1;33m'
BLUE='\033[0;34m'
NC='\033[0m' # No Color

# Get script directory
SCRIPT_DIR="$(cd "$(dirname "${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="$(cd "$SCRIPT_DIR/.." && pwd)"
TOOLS_DIR="$PROJECT_ROOT/tools"
VERILATOR_DIR="$TOOLS_DIR/verilator"
VERILATOR_REPO="https://github.com/verilator/verilator.git"
UVM_DIR="$TOOLS_DIR/uvm-2017"
UVM_VERSION="2017-1.0"
UVM_TARBALL="Accellera-1800.2-${UVM_VERSION}.tar.gz"
UVM_URL="https://www.accellera.org/images/downloads/standards/uvm/${UVM_TARBALL}"
UVM_EXTRACTED_DIR="1800.2-${UVM_VERSION}"

VERILATOR_INSTALL_PREFIX="/usr/local"  # Default system installation
LOCAL_INSTALL=false  # If true, install to project-local directory
FORCE_REINSTALL=false
SKIP_UVM=false  # If true, skip UVM download
USE_VENV=true  # If true, create and use Python virtual environment
VENV_DIR="$PROJECT_ROOT/.venv"  # Virtual environment directory

# Function to print colored output
print_status() {
    local color=$1
    local message=$2
    echo -e "${color}[$(date '+%Y-%m-%d %H:%M:%S')] ${message}${NC}"
}

# Function to show usage
show_usage() {
    echo "Usage: $0 [OPTIONS]"
    echo ""
    echo "Installs Verilator from source and sets up Accellera UVM 2017-1.0"
    echo ""
    echo "Options:"
    echo "  --local             Install Verilator to project-local directory (no sudo required)"
    echo "  --prefix PREFIX     Installation prefix for Verilator (default: /usr/local)"
    echo "  --skip-uvm         Skip UVM download and setup"
    echo "  --venv DIR          Use virtual environment at DIR (default: .venv)"
    echo "  --no-venv           Skip Python virtual environment setup"
    echo "  --force             Force reinstall even if already installed"
    echo "  --help, -h          Show this help message"
    echo ""
    echo "Examples:"
    echo "  $0                  # Install Verilator and UVM 2017 to system (with venv)"
    echo "  $0 --local          # Install to project-local directory"
    echo "  $0 --skip-uvm       # Install only Verilator"
    echo "  $0 --no-venv        # Skip Python virtual environment setup"
}

# Function to check if command exists
command_exists() {
    command -v "$1" >/dev/null 2>&1
}

# Function to detect OS
detect_os() {
    if [[ "$OSTYPE" == "linux-gnu"* ]]; then
        if command_exists apt-get; then
            echo "debian"
        elif command_exists yum; then
            echo "rhel"
        elif command_exists dnf; then
            echo "fedora"
        else
            echo "linux"
        fi
    elif [[ "$OSTYPE" == "darwin"* ]]; then
        echo "macos"
    elif [[ "$OSTYPE" == "msys" || "$OSTYPE" == "cygwin" ]]; then
        echo "windows"
    else
        echo "unknown"
    fi
}

# Function to install system dependencies
install_system_dependencies() {
    local os=$(detect_os)
    print_status $BLUE "Installing system dependencies for $os..."
    
    case $os in
        debian)
            sudo apt-get update
            sudo apt-get install -y bison flex libfl-dev help2man z3
            sudo apt-get install -y git autoconf make g++ perl python3
            # Additional dependencies that may be needed
            sudo apt-get install -y ccache libgoogle-perftools-dev numactl perl-doc || true
            ;;
        rhel|fedora)
            if command_exists dnf; then
                sudo dnf install -y bison flex flex-devel help2man z3
                sudo dnf install -y git autoconf make gcc-c++ perl python3
                sudo dnf install -y ccache gperftools-devel numactl perl-Pod-Html || true
            else
                sudo yum install -y bison flex flex-devel help2man z3
                sudo yum install -y git autoconf make gcc-c++ perl python3
                sudo yum install -y ccache gperftools-devel numactl perl-Pod-Html || true
            fi
            ;;
        macos)
            if ! command_exists brew; then
                print_status $RED "Error: Homebrew is required for macOS installation"
                exit 1
            fi
            brew install bison flex help2man z3
            brew install git autoconf make gcc perl python3
            brew install ccache || true
            ;;
        *)
            print_status $YELLOW "Warning: Unknown OS. Please install dependencies manually:"
            echo "  bison, flex, libfl-dev, help2man, z3, git, autoconf, make, g++, perl, python3"
            ;;
    esac
    
    print_status $GREEN "System dependencies installed successfully"
}

# Function to check Python installation
check_python() {
    if ! command_exists python3; then
        print_status $RED "Error: python3 is not installed"
        exit 1
    fi
    
    local python_version=$(python3 --version 2>&1 | awk '{print $2}')
    print_status $BLUE "Found Python: $python_version"
    
    # Check if Python version is >= 3.8
    local major=$(echo "$python_version" | cut -d. -f1)
    local minor=$(echo "$python_version" | cut -d. -f2)
    
    if [[ $major -lt 3 ]] || [[ $major -eq 3 && $minor -lt 8 ]]; then
        print_status $RED "Error: Python 3.8+ is required (found $python_version)"
        exit 1
    fi
}

# Function to setup virtual environment
setup_venv() {
    if [[ "$USE_VENV" == false ]]; then
        print_status $YELLOW "Skipping virtual environment setup (--no-venv specified)"
        return 0
    fi
    
    # Check Python first
    check_python
    
    if [[ ! -d "$VENV_DIR" ]] || [[ ! -f "$VENV_DIR/bin/activate" ]]; then
        if [[ -d "$VENV_DIR" ]]; then
            print_status $YELLOW "Virtual environment directory exists but is invalid, recreating..."
            rm -rf "$VENV_DIR"
        fi
        print_status $BLUE "Creating Python virtual environment at $VENV_DIR..."
        python3 -m venv "$VENV_DIR"
    else
        print_status $BLUE "Virtual environment already exists at $VENV_DIR"
    fi
    
    # Activate virtual environment
    print_status $BLUE "Activating virtual environment..."
    source "$VENV_DIR/bin/activate"
    
    # Upgrade pip
    print_status $BLUE "Upgrading pip..."
    pip install --upgrade pip setuptools wheel >/dev/null 2>&1 || {
        print_status $YELLOW "Warning: Failed to upgrade pip, continuing anyway"
    }
    
    print_status $GREEN "Virtual environment setup completed"
    print_status $YELLOW "To activate in future sessions: source $VENV_DIR/bin/activate"
}

# Function to check if Verilator is already installed
check_verilator_installed() {
    if command_exists verilator; then
        local version=$(verilator --version 2>&1 | head -1 || echo "unknown")
        print_status $YELLOW "Verilator is already installed: $version"
        
        if [[ "$FORCE_REINSTALL" == true ]]; then
            print_status $BLUE "Force reinstall enabled, proceeding with installation..."
            return 0
        fi
        
        read -p "Do you want to reinstall? (y/N): " -n 1 -r
        echo
        if [[ ! $REPLY =~ ^[Yy]$ ]]; then
            print_status $BLUE "Skipping Verilator installation"
            return 1
        fi
    fi
    return 0
}

# Function to setup git repository for Verilator
setup_verilator_repo() {
    # Check if directory exists and is a valid git repository
    if [[ -d "$VERILATOR_DIR" ]] && [[ -d "$VERILATOR_DIR/.git" ]]; then
        print_status $BLUE "Verilator directory exists, updating..."
        cd "$VERILATOR_DIR"
        git pull || true
        cd "$PROJECT_ROOT"
    elif [[ -d "$VERILATOR_DIR" ]] && [[ ! -d "$VERILATOR_DIR/.git" ]]; then
        # Directory exists but is not a git repository
        print_status $YELLOW "Verilator directory exists but is not a git repository, removing and re-cloning..."
        rm -rf "$VERILATOR_DIR"
        print_status $BLUE "Cloning Verilator repository..."
        git clone "$VERILATOR_REPO" "$VERILATOR_DIR"
    else
        # Directory doesn't exist
        print_status $BLUE "Cloning Verilator repository..."
        git clone "$VERILATOR_REPO" "$VERILATOR_DIR"
    fi
}

# Function to build and install Verilator from source
build_verilator() {
    print_status $BLUE "Building Verilator from source..."
    
    # Setup repository
    setup_verilator_repo
    
    # Verify the directory is now a valid git repository
    if [[ ! -d "$VERILATOR_DIR/.git" ]]; then
        print_status $RED "Error: Verilator directory is not a valid git repository"
        exit 1
    fi
    
    cd "$VERILATOR_DIR" || {
        print_status $RED "Error: Failed to change to Verilator directory: $VERILATOR_DIR"
        exit 1
    }
    
    # Get latest version (master/main branch for UVM support)
    print_status $BLUE "Checking out latest version (for UVM 2017 support)..."
    if ! git fetch --tags; then
        print_status $YELLOW "Warning: Failed to fetch tags, continuing with current branch"
    fi
    
    # Use latest master/main branch for UVM support
    if git show-ref --verify --quiet refs/heads/master; then
        git checkout master
    elif git show-ref --verify --quiet refs/heads/main; then
        git checkout main
    else
        print_status $YELLOW "Warning: No master/main branch found, using current branch"
    fi
    
    git pull || true
    
    # Uninstall previous installation if exists
    if command_exists verilator; then
        print_status $YELLOW "Uninstalling previous Verilator installation..."
        sudo make uninstall 2>/dev/null || true
    fi
    
    # Autoconf setup
    print_status $BLUE "Running autoconf..."
    if ! autoconf; then
        print_status $RED "Error: autoconf failed"
        cd "$PROJECT_ROOT"
        exit 1
    fi
    
    # Configure
    print_status $BLUE "Configuring build..."
    if [[ "$LOCAL_INSTALL" == true ]]; then
        VERILATOR_INSTALL_PREFIX="$PROJECT_ROOT/tools/verilator-install"
        mkdir -p "$VERILATOR_INSTALL_PREFIX"
        print_status $BLUE "Installing to local directory: $VERILATOR_INSTALL_PREFIX"
    fi
    
    if ! ./configure --prefix="$VERILATOR_INSTALL_PREFIX"; then
        print_status $RED "Error: configure failed"
        cd "$PROJECT_ROOT"
        exit 1
    fi
    
    # Build
    print_status $BLUE "Building Verilator (this may take several minutes)..."
    local num_cores=$(nproc 2>/dev/null || sysctl -n hw.ncpu 2>/dev/null || echo 4)
    
    # Check if help2man is available
    local has_help2man=false
    if command_exists help2man; then
        has_help2man=true
    else
        print_status $YELLOW "Warning: help2man not found - man pages will not be generated"
    fi
    
    # Build
    set +e  # Temporarily disable exit on error for build
    make -j"$num_cores"
    local make_exit_code=$?
    set -e  # Re-enable exit on error
    
    # Check if verilator binary was built
    if [[ ! -f "bin/verilator" ]] && [[ ! -f "bin/verilator_bin" ]]; then
        print_status $RED "Error: Build failed - verilator binary not found"
        if [[ "$has_help2man" == false ]]; then
            print_status $YELLOW "Note: help2man is missing. Install it with: sudo apt-get install help2man"
        fi
        cd "$PROJECT_ROOT"
        exit 1
    fi
    
    # Build succeeded
    if [[ $make_exit_code -ne 0 ]] && [[ "$has_help2man" == false ]]; then
        print_status $YELLOW "Build completed (verilator binary built, man pages skipped due to missing help2man)"
    elif [[ $make_exit_code -eq 0 ]]; then
        print_status $GREEN "Build completed successfully"
    fi
    
    # Install
    if [[ "$LOCAL_INSTALL" == true ]]; then
        print_status $BLUE "Installing Verilator to local directory..."
        if ! make install; then
            print_status $RED "Error: Installation failed"
            cd "$PROJECT_ROOT"
            exit 1
        fi
        print_status $GREEN "Verilator installed to: $VERILATOR_INSTALL_PREFIX"
        print_status $YELLOW "Add to PATH: export PATH=\"$VERILATOR_INSTALL_PREFIX/bin:\$PATH\""
    else
        print_status $BLUE "Installing Verilator (requires sudo)..."
        if ! sudo make install; then
            print_status $RED "Error: Installation failed"
            cd "$PROJECT_ROOT"
            exit 1
        fi
    fi
    
    # Verify installation
    if [[ "$LOCAL_INSTALL" == true ]]; then
        if [[ -f "$VERILATOR_INSTALL_PREFIX/bin/verilator" ]]; then
            local version=$("$VERILATOR_INSTALL_PREFIX/bin/verilator" --version 2>&1 | head -1 || echo "unknown")
            print_status $GREEN "Verilator installed successfully: $version"
            print_status $YELLOW "Note: Add to PATH: export PATH=\"$VERILATOR_INSTALL_PREFIX/bin:\$PATH\""
        else
            print_status $RED "Error: Verilator installation failed - binary not found"
            cd "$PROJECT_ROOT"
            exit 1
        fi
    else
        if command_exists verilator; then
            local version=$(verilator --version 2>&1 | head -1 || echo "unknown")
            print_status $GREEN "Verilator installed successfully: $version"
        else
            print_status $RED "Error: Verilator installation failed - command not found"
            print_status $YELLOW "You may need to add $VERILATOR_INSTALL_PREFIX/bin to your PATH"
            cd "$PROJECT_ROOT"
            exit 1
        fi
    fi
    
    cd "$PROJECT_ROOT"
}

# Function to download and setup UVM 2017
setup_uvm_2017() {
    if [[ "$SKIP_UVM" == true ]]; then
        print_status $YELLOW "Skipping UVM 2017 download and setup"
        return 0
    fi
    
    print_status $BLUE "Setting up Accellera UVM 2017-1.0..."
    
    # Create UVM directory
    mkdir -p "$UVM_DIR"
    cd "$UVM_DIR" || {
        print_status $RED "Error: Failed to create UVM directory: $UVM_DIR"
        exit 1
    }
    
    # Check if already downloaded
    if [[ -d "$UVM_EXTRACTED_DIR" ]] && [[ -f "$UVM_EXTRACTED_DIR/src/uvm_pkg.sv" ]]; then
        print_status $YELLOW "UVM 2017-1.0 already exists at: $UVM_DIR/$UVM_EXTRACTED_DIR"
        read -p "Do you want to re-download? (y/N): " -n 1 -r
        echo
        if [[ ! $REPLY =~ ^[Yy]$ ]]; then
            print_status $BLUE "Using existing UVM installation"
            cd "$PROJECT_ROOT"
            return 0
        fi
        rm -rf "$UVM_EXTRACTED_DIR"
    fi
    
    # Download UVM
    if [[ ! -f "$UVM_TARBALL" ]]; then
        print_status $BLUE "Downloading UVM 2017-1.0 from Accellera..."
        if command_exists wget; then
            wget "$UVM_URL" || {
                print_status $RED "Error: Failed to download UVM tarball"
                cd "$PROJECT_ROOT"
                exit 1
            }
        elif command_exists curl; then
            curl -L -o "$UVM_TARBALL" "$UVM_URL" || {
                print_status $RED "Error: Failed to download UVM tarball"
                cd "$PROJECT_ROOT"
                exit 1
            }
        else
            print_status $RED "Error: Neither wget nor curl found. Please install one of them."
            exit 1
        fi
    else
        print_status $BLUE "UVM tarball already exists, skipping download"
    fi
    
    # Extract UVM
    print_status $BLUE "Extracting UVM 2017-1.0..."
    if ! tar -xzf "$UVM_TARBALL"; then
        print_status $RED "Error: Failed to extract UVM tarball"
        cd "$PROJECT_ROOT"
        exit 1
    fi
    
    # Verify extraction
    if [[ ! -d "$UVM_EXTRACTED_DIR" ]] || [[ ! -f "$UVM_EXTRACTED_DIR/src/uvm_pkg.sv" ]]; then
        print_status $RED "Error: UVM extraction failed or incomplete"
        cd "$PROJECT_ROOT"
        exit 1
    fi
    
    print_status $GREEN "UVM 2017-1.0 extracted successfully"
    cd "$PROJECT_ROOT"
}

# Function to create environment setup script
create_env_script() {
    local env_script="$PROJECT_ROOT/scripts/setup_uvm_env.sh"
    print_status $BLUE "Creating environment setup script: $env_script"
    
    cat > "$env_script" << EOF
#!/bin/bash
# Environment setup script for Verilator with UVM 2017
# Source this file: source scripts/setup_uvm_env.sh

# Get script directory
SCRIPT_DIR="\$(cd "\$(dirname "\${BASH_SOURCE[0]}")" && pwd)"
PROJECT_ROOT="\$(cd "\$SCRIPT_DIR/.." && pwd)"

# Set UVM_HOME
export UVM_HOME="\$PROJECT_ROOT/tools/uvm-2017/1800.2-2017-1.0/src"

# Add Verilator to PATH (if local install)
if [[ -d "\$PROJECT_ROOT/tools/verilator-install/bin" ]]; then
    export PATH="\$PROJECT_ROOT/tools/verilator-install/bin:\$PATH"
fi

# Activate Python virtual environment (if it exists)
if [[ -f "\$PROJECT_ROOT/.venv/bin/activate" ]]; then
    source "\$PROJECT_ROOT/.venv/bin/activate"
    echo "Python virtual environment activated"
fi

# Verify setup
echo "UVM_HOME: \$UVM_HOME"
if command -v verilator >/dev/null 2>&1; then
    echo "Verilator: \$(verilator --version 2>&1 | head -1)"
else
    echo "Warning: Verilator not found in PATH"
fi

if [[ -f "\$UVM_HOME/uvm_pkg.sv" ]]; then
    echo "UVM 2017-1.0: Found at \$UVM_HOME"
else
    echo "Warning: UVM 2017-1.0 not found at \$UVM_HOME"
fi

if command -v python3 >/dev/null 2>&1; then
    echo "Python: \$(python3 --version 2>&1)"
fi
EOF
    
    chmod +x "$env_script"
    print_status $GREEN "Environment setup script created: $env_script"
    print_status $YELLOW "To use UVM with Verilator, run: source scripts/setup_uvm_env.sh"
}

# Function to parse command line arguments
parse_args() {
    while [[ $# -gt 0 ]]; do
        case $1 in
            --local)
                LOCAL_INSTALL=true
                shift
                ;;
            --prefix)
                VERILATOR_INSTALL_PREFIX="$2"
                shift 2
                ;;
            --skip-uvm)
                SKIP_UVM=true
                shift
                ;;
            --venv)
                VENV_DIR="$2"
                USE_VENV=true
                shift 2
                ;;
            --no-venv)
                USE_VENV=false
                shift
                ;;
            --force)
                FORCE_REINSTALL=true
                shift
                ;;
            --help|-h)
                show_usage
                exit 0
                ;;
            *)
                print_status $RED "Unknown option: $1"
                show_usage
                exit 1
                ;;
        esac
    done
}

# Main function
main() {
    print_status $BLUE "Starting Verilator with UVM 2017 installation..."
    print_status $BLUE "Based on: https://antmicro.com/blog/2025/10/support-for-upstream-uvm-2017-in-verilator"
    
    # Parse arguments
    parse_args "$@"
    
    # Create tools directory
    mkdir -p "$TOOLS_DIR"
    
    # Setup Python virtual environment (if enabled)
    setup_venv
    
    # Check if Verilator is already installed
    local should_install_verilator=true
    if ! check_verilator_installed; then
        should_install_verilator=false
    fi
    
    # Install system dependencies
    install_system_dependencies
    
    # Build and install Verilator
    if [[ "$should_install_verilator" == true ]]; then
        build_verilator
    fi
    
    # Setup UVM 2017
    setup_uvm_2017
    
    # Create environment setup script
    create_env_script
    
    print_status $GREEN "Installation completed successfully!"
    print_status $BLUE ""
    print_status $BLUE "Next steps:"
    print_status $BLUE "  1. Source the environment script: source scripts/setup_uvm_env.sh"
    if [[ "$USE_VENV" == true ]]; then
        print_status $BLUE "     (This will activate the Python virtual environment and set up UVM/Verilator)"
    fi
    if [[ "$LOCAL_INSTALL" == true ]]; then
        print_status $BLUE "  2. Verilator is installed locally. Add to PATH:"
        print_status $BLUE "     export PATH=\"$PROJECT_ROOT/tools/verilator-install/bin:\$PATH\""
    fi
    print_status $BLUE "  3. Verify installation: verilator --version"
    if [[ "$USE_VENV" == true ]]; then
        print_status $BLUE "  4. Install Python dependencies (if needed):"
        print_status $BLUE "     pip install -r requirements.txt  # if you have a requirements file"
    fi
    print_status $BLUE "  5. Example usage:"
    print_status $BLUE "     verilator -Wno-fatal --binary -j \$(nproc) --top-module tbench_top \\"
    print_status $BLUE "         +incdir+\$UVM_HOME +define+UVM_NO_DPI +incdir+\$(pwd) \\"
    print_status $BLUE "         \$UVM_HOME/uvm_pkg.sv your_testbench.sv"
}

# Run main function with all arguments
main "$@"
