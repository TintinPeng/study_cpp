cmake_minimum_required(VERSION 3.0.0)
project(study_cpp VERSION 0.1.0)

include(CTest)
enable_testing()

# add_executable(study_cpp main.cpp)
aux_source_directory(./src DIR_SRCS)
add_executable(study_cpp ${DIR_SRCS})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
