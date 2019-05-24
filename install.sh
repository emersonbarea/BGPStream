#!/bin/bash

# MiniSecBGP script install for Ubuntu 18.04.1 Server LTS (Bionic Beaver)
# Emerson Barea (emerson.barea@gmail.com)

function update_OS_install_requirements() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Updating O.S. and installing BGPStream packages requeriments...'
    sudo apt update; sudo apt upgrade -y; sudo apt autoremove
    sudo apt install libbz2-dev zlib1g-dev libcurl-ocaml-dev build-essential dh-autoreconf python python-pip libtool-bin -y
}

function install_wandio() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Installing Wandio-4.0.0...'
    cd $INSTALL_DIR
    rm -rf $INSTALL_DIR/wandio-4.0.0/ 2> /dev/null
    printf '\n\e[1;33m%-6s\e[m\n' '- downloading Wandio'
    curl -O https://research.wand.net.nz/software/wandio/wandio-4.0.0.tar.gz -P $INSTALL_DIR
    tar zxf $INSTALL_DIR/wandio-4.0.0.tar.gz
    cd $INSTALL_DIR/wandio-4.0.0/
    printf '\n\e[1;33m%-6s\e[m\n' '- Wandio - ./configure'
    ./configure
    printf '\n\e[1;33m%-6s\e[m\n' '- Wandio - make'
    sudo make
    printf '\n\e[1;33m%-6s\e[m\n' '- Wandio - make install'
    sudo make install
    cd $INSTALL_DIR
    printf '\n\e[1;33m%-6s\e[m\n' '- Wandio - ldconfig'
    sudo ldconfig
}

function install_BGPStream() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Installing BGPStream 1.2.3...'
    cd $INSTALL_DIR
    rm -rf $INSTALL_DIR/bgpstream 2> /dev/null
    rm -rf $INSTALL_DIR/ltmain.sh 2> /dev/null
    printf '\n\e[1;33m%-6s\e[m\n' '- downloading BGPStream'
    git clone https://github.com/CAIDA/bgpstream.git
    cd $INSTALL_DIR/bgpstream
    printf '\n\e[1;33m%-6s\e[m\n' '- BGPStream - ./autogen.sh'
    printf 'autoreconf -vfi' | sudo tee --append autogen.sh
    ./autogen.sh
    printf '\n\e[1;33m%-6s\e[m\n' '- BGPStream - ./configure'
    ./configure
    printf '\n\e[1;33m%-6s\e[m\n' '- BGPStream - make'
    sudo make
    printf '\n\e[1;33m%-6s\e[m\n' '- BGPStream - make install'
    sudo make install
    cd $INSTALL_DIR
    printf '\n\e[1;33m%-6s\e[m\n' '- BGPStream - ldconfig'
    sudo ldconfig
}

function install_PyBGPStream() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Installing PyBGPStream...'
    pip install pybgpstream
}

function test_PyBGPStream() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Testing PyBGPStream...'
    cd $INSTALL_DIR
    ./pybgpstream-print.py
    printf '\n\e[1;33m%-6s\e[m\n' 'If you are seeing an output started with this content "('ris', 'rrc11', 'update', 1438417216, 'valid'), everything is rigth :)'
}

USER=$(whoami)
HOME_DIR=$(echo $HOME)
INSTALL_DIR=$HOME_DIR/BGPStream

update_OS_install_requirements
install_wandio
install_BGPStream
install_PyBGPStream
test_PyBGPStream
