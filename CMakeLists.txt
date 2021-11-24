# cmake 最低版本需求
cmake_minimum_required(VERSION 3.13)
# 工程名称
project(TestDemo)
# 设置C/C++标准
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_COMPILER "gcc")
set(CMAKE_CXX_COMPILE_FEATURES "g++")

# debug模式,否则无法进入断点
set (CMAKE_CXX_FLAGS "-g -Wall")
set (CMAKE_CXX_FLAGS_DEBUG "-O0")

if(CMAKE_SIZEOF_VOID_P EQUAL 8)
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/x64)
else()
    set(EXECUTABLE_OUTPUT_PATH ${PROJECT_SOURCE_DIR}/bin/x86)
endif()

# if(CMAKE_BUILD_TYPE MATCHES Debug)
#     set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/Debug)
# elseif(CMAKE_BUILD_TYPE MATCHES Release)  
#     set(EXECUTABLE_OUTPUT_PATH ${EXECUTABLE_OUTPUT_PATH}/Release)
# endif()

INCLUDE_DIRECTORIES(${PROJECT_SOURCE_DIR}/include/use_dll ${PROJECT_SOURCE_DIR}/include/use_engine)
# 添加库文件路径
LINK_DIRECTORIES(${PROJECT_SOURCE_DIR}/lib/use_dll ${PROJECT_SOURCE_DIR}/lib/use_engine)

aux_source_directory(${PROJECT_SOURCE_DIR}/src DIRSRCS)

# 编译源码生成目标
add_executable(TestDemo ${DIRSRCS})

TARGET_LINK_LIBRARIES(TestDemo PUBLIC LicensePlateLocation mclmcrrt libMatlabDataArray libMatlabEngine)
