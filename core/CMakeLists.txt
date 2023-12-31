#  Copyright (c) 2023 Feng Yang
#
#  I am making my contributions/submissions to this project solely in my
#  personal capacity and am not conveying any rights to any intellectual
#  property of any third parties.

cmake_minimum_required(VERSION 3.16)

project(core LANGUAGES C CXX CUDA)

set(COMMON_FILES
        crt.h
        builtin.h
        initializer_array.h
        vec.h
        mat.h
        quat.h
        array.h
        fabric.h
        spatial.h
        rand.h
        noise.h
        range.h
        bounds.h
        solid_angle.h
        intersect.h
        intersect_tri.h
        intersect_adj.h
        svd.h
        matnn.h
        #
        hashgrid.h
)

source_group("common\\" FILES ${COMMON_FILES})

set(PROJECT_FILES
        ${COMMON_FILES}
)

add_library(${PROJECT_NAME} INTERFACE ${PROJECT_FILES})
target_include_directories(${PROJECT_NAME} INTERFACE ${CMAKE_CURRENT_SOURCE_DIR})