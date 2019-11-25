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
- googlemock


## Group Discussion Summary

After the implementation of part 2, there were no build errors.

Coverage was 100% for this repository after the first successful build. But we had to add a code snippet which avoids the program to go to infinite loop, as mentioned in the UML diagram provided by part 1 team. That part of the code was not being used while running the program and there were no test cases to check it. So, after the changes were made, we achieved code coverage of 96.296%. 

Currently, the given two tests check the functions in the class. First test will test the compute method and the second test checks the method that initializes a new value for the time interval.

The implementation of the class satisfies the given class design and successfully passes all the unit tests.

## Google Mock

Gmock is a library/framework for creating  mock classes in order to proporly test your program. 

In order to perform gmock testing in this project , the original class "PidController" was modified to make it virtual.
Secondly the inherited class "PID" implements the virtual classes of the previous class.
Once the class "Pidcontroller" has virtual methods, to perform testing is necessary to mock the some methods.
For this purpose the methods computeVelocity and changeTimeInterval are mocked. 
The testing was done using the gmock macro "EXPECT_CALL" to set an expectation on the mocked methods

## Google Mock dependencies

To perform gmock testing it is necessary to add some information to the Cmakelists.

### CMakeLists of the root folder

Add the subdirectory gooltests

```
add_subdirectory(vendor/googletest)

```
### CMakeLists of the test folder

Include the googletest directories

```
target_include_directories(cpp-test PUBLIC ../vendor/googletest/googletest/include PUBLIC ../vendor/googletest/googlemock/include  ${CMAKE_SOURCE_DIR}/include)

```

Linking libraries 

```
target_link_libraries(cpp-test PUBLIC gtest PUBLIC gmock)

```

## Standard install via command-line
```
git clone -b GMock_Extra_Credit --single-branch https://github.com/andrelgf1/Test-Driven-Development-PID-Controller.git
cd <path to repository>
mkdir build
cd build
cmake ..
make
Run tests: ./test/cpp-test
Run program: ./app/shell-app
```










