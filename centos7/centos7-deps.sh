#!/bin/bash

sudo yum -y install centos-release-scl
sudo yum -y install devtoolset-7-gcc*
scl enable devtoolset-7 bash

