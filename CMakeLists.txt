cmake_minimum_required (VERSION 3.8)

project ("socket-server" VERSION 0.0.1)

MESSAGE(STATUS "CMAKE_SOURCE_DIR " ${CMAKE_SOURCE_DIR})

# 指定C++ 标准 
# 也可通过 camek .. -DCMAKE_CXX_STANDARD=17
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)
# 指定C 标准 
set(CMAKE_C_STANDARD 99)

#add_compile_options(-Wall -Wextra -pedantic -Werror)
#set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -pipe -std=c99")
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -pipe -std=c++11")

# 归档静态库到指定目录
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/lib)
# 归档动态库到指定目录
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/lib)
# 归档可执行文件到指定目录
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/build/bin)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_CURRENT_LIST_DIR}/Bin/Debug)
#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_CURRENT_LIST_DIR}/Bin/Release)
#set(CMAKE_ARCHIEVE_OUTPUT_DIRECTORY_DEBUG  ${CMAKE_CURRENT_LIST_DIR}/Bin/Debug)
#set(CMAKE_ARCHIEVE_OUTPUT_DIRECTORY_RELEASE  ${CMAKE_CURRENT_LIST_DIR}/Bin/Release)


add_subdirectory ("mytools")

#设置可执行程序
#add_executable(demo main.cpp)

#设置动态库
#add_library(add SHARED add.cpp)