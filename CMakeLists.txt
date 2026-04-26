cmake_minimum_required(VERSION 3.10)
project(GitPractice)

enable_testing()

add_executable(app src/main.cpp)

add_executable(test_add tests/test_add.cpp)
add_test(NAME AddTest COMMAND test_add)