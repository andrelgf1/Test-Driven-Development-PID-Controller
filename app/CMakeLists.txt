add_executable(shell-app main.cpp PidController.cpp Pid.cpp)
include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
