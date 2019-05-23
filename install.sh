#!/bin/bash

# MiniSecBGP script install for Ubuntu 18.04.1 Server LTS (Bionic Beaver)
# Emerson Barea (emerson.barea@gmail.com)

function update_OS_install_requirements() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Updating O.S. and installing BGPStream packages requeriments...'
    sudo apt update; sudo apt upgrade -y; sudo apt autoremove
    sudo apt install libbz2-dev zlib1g-dev libcurl-ocaml-dev build-essential -y
}

function install_wandio() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Installing Wandio-4.0.0...'
    rm -rf $INSTALL_DIR/wandio-4.0.0/ 2> /dev/null
    curl -O https://research.wand.net.nz/software/wandio/wandio-4.0.0.tar.gz -P $INSTALL_DIR
    tar zxf $INSTALL_DIR/wandio-4.0.0.tar.gz
    cd $INSTALL_DIR/wandio-4.0.0/
    ./configure
    sudo make
    sudo make install
    cd $INSTALL_DIR
}

function install_BGPStream() {
    printf '\n\e[1;33m%-6s\e[m\n' '-- Installing BGPStream 1.2.3...'
    curl -O http://bgpstream.caida.org/bundles/caidabgpstreamwebhomepage/dists/bgpstream-1.2.3.tar.gz -P $INSTALL_DIR
    tar zxf $INSTALL_DIR/bgpstream-1.2.3.tar.gz
    cd $INSTALL_DIR/bgpstream-1.2.3
    ./configure
    sudo make
    sudo make install
    cd $INSTALL_DIR
}

USER=$(whoami)
HOME_DIR=$(echo $HOME)
INSTALL_DIR=$HOME_DIR/MiniSecBGP

update_OS_install_requirements
install_wandio
install_BGPStream
