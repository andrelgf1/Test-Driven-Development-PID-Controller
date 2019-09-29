# Week5-Test-Driven-Development
[![Build Status](https://travis-ci.org/Eashwar-S/Test-Driven-Development-PID-Controller.svg?branch=master)](https://travis-ci.org/Eashwar-S/Test-Driven-Development-PID-Controller)
[![Coverage Status](https://coveralls.io/repos/github/Eashwar-S/Test-Driven-Development-PID-Controller/badge.svg?branch=master)](https://coveralls.io/github/Eashwar-S/Test-Driven-Development-PID-Controller?branch=master)
---


Test Driven Development 

Part 1:
Driver - Nakul Patel
Navigator - Andre Luiz Gomes Ferreira


## Overview

Week5 Exercise for the Test Driven Development for PID controller:

- cmake
- googletest

## Standard install via command-line
```
git clone --recursive https://github.com/nakulpatel94/Test-Driven-Development-PID-Controller.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```

## Building for code coverage (for assignments beginning in Week 4)
```
sudo apt-get install lcov
cmake -D COVERAGE=ON -D CMAKE_BUILD_TYPE=Debug ../
make
make code_coverage
```
This generates a index.html page in the build/coverage sub-directory that can be viewed locally in a web browser.

## Working with Eclipse IDE ##

## Installation

In your Eclipse workspace directory (or create a new one), checkout the repo (and submodules)
```
mkdir -p ~/workspace
cd ~/workspace
git clone --recursive https://github.com/nakulpatel94/Test-Driven-Development-PID-Controller.git
```

In your work directory, use cmake to create an Eclipse project for an [out-of-source build] of Test-Driven-Development-PID-Controller

```
cd ~/workspace
mkdir -p boilerplate-eclipse
cd boilerplate-eclipse
cmake -G "Eclipse CDT4 - Unix Makefiles" -D CMAKE_BUILD_TYPE=Debug -D CMAKE_ECLIPSE_VERSION=4.7.0 -D CMAKE_CXX_COMPILER_ARG1=-std=c++14 ../Test-Driven-Development-PID-Controller/
```

## Import

Open Eclipse, go to File -> Import -> General -> Existing Projects into Workspace -> 
Select "boilerplate-eclipse" directory created previously as root directory -> Finish

# Edit

Source files may be edited under the "[Source Directory]" label in the Project Explorer.


## Build

To build the project, in Eclipse, unfold boilerplate-eclipse project in Project Explorer,
unfold Build Targets, double click on "all" to build all projects.

## Run

1. In Eclipse, right click on the boilerplate-eclipse in Project Explorer,
select Run As -> Local C/C++ Application

2. Choose the binaries to run (e.g. shell-app, cpp-test for unit testing)






