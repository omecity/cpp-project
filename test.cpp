#include <gtest/gtest.h>
#include "files.h"

TEST(AdditionTest, HandlesPositiveNumbers) {
    EXPECT_EQ(add(3, 4), 7);
    EXPECT_EQ(add(10, 5), 15);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-3, -4), -7);
    EXPECT_EQ(add(-10, 5), -5);
}

TEST(AdditionTest, HandlesNegativeNumbers) {
    EXPECT_EQ(add(-3, -4), -7);
    EXPECT_EQ(add(-10, 25), -12);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
