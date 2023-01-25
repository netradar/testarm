cmake_minimum_required(VERSION 3.0.0)

set(CMAKE_CXX_STANDARD 17)
project(armtest VERSION 0.1.0)
#set(CMAKE_CXX_COMPILER /usr/bin/arm-linux-gnueabi-g++)
include_directories(/usr/local/include)
link_libraries(/usr/local/lib)


add_executable(armtest main.cpp)

target_link_libraries(armtest PocoFoundation pthread)
