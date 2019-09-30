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

Coverage was 100% for this repository after the first successful build. But we had to add a code snippet which avoids the program to go to infinite loop, as mentioned in the UML diagram provided by part 1 team. That part of the code was not being used while running the program and there were no test cases to check it. So, after the changes were made, we achieved code coverage of 96.296%. 

Currently, the given two tests check the functions in the class. First test will test the compute method and the second test checks the method that initializes a new value for the time interval.

The implementation of the class satisfies the given class design and successfully passes all the unit tests.


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










