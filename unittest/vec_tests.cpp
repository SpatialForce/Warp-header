//  Copyright (c) 2023 Feng Yang
//
//  I am making my contributions/submissions to this project solely in my
//  personal capacity and am not conveying any rights to any intellectual
//  property of any third parties.

#include <gtest/gtest.h>
#include "core/vec.h"

TEST(VecCpp, add) {
    wp::vec3f a{1, 2, 3};
    wp::vec3f b{4, 5, 6};
    auto c = a + b;
    EXPECT_EQ(c[0], 5);
    EXPECT_EQ(c[1], 7);
    EXPECT_EQ(c[2], 9);
}