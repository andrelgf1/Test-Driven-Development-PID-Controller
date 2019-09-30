# Week5-Test-Driven-Development
[![Build Status](https://travis-ci.org/nakulpatel94/Test-Driven-Development-PID-Controller.svg?branch=master)](https://travis-ci.org/nakulpatel94/Test-Driven-Development-PID-Controller)
[![Coverage Status](https://coveralls.io/repos/github/nakulpatel94/Test-Driven-Development-PID-Controller/badge.svg?branch=master)](https://coveralls.io/github/nakulpatel94/Test-Driven-Development-PID-Controller?branch=master)
---


Test Driven Development 

Part 1:
Driver - Nakul Patel
Navigator - Andre Luiz Gomes Ferreira

Part 2:
Driver: Eashwar Sathyamurthy
Navigator: Sri Manika Makam


## Overview

Week5 Exercise for the Test Driven Development for PID controller:

- cmake
- googletest


## Group Discussion Summary

After the implementation of part 2, there were no build errors.

Coverage was 96.15% for this repository after the first successful build. Then, we analyzed the code and made few changes to achieve 96.296% code coverage. We had to compromise on the code coverage because our code includes snippets which avoids the program to go to infinite loop.

Currently, the two tests check the functions in the class. First test will test compute method by assigning random values and the second test will initialize a new value for the time interval.


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










