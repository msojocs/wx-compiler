#!/bin/bash
wget https://ftp.gnu.org/gnu/gcc/gcc-5.4.0/gcc-5.4.0.tar.gz
sudo mkdir /usr/local/gcc
tar -zxf gcc-5.4.0.tar.gz
cd gcc-5.4.0
./contrib/download_prerequisites
./configure --prefix=/usr/local/gcc/gcc-5.4.0 --enable-threads=posix --disable-checking --disable-multilib --enable-languages=c,c++ --disable-libsanitizer
make
sudo make install
