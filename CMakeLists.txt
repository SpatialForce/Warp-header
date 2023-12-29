cmake_minimum_required(VERSION 3.27)
project(Warp_header)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CUDA_STANDARD 20)

enable_language(CUDA)
find_package(CUDAToolkit)
set(CMAKE_CUDA_ARCHITECTURES 90)
include_directories(${CUDA_INCLUDE_DIRS})

add_subdirectory(core)
add_subdirectory(unittest)