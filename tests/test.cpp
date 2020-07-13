#include "gtest/gtest.h"
#include "lib.h"

namespace testing{

  TEST(ZeroTest, Zero) {
    EXPECT_EQ(0, return_zero());
  }
  TEST(MeanTest, Int) {
    EXPECT_EQ(0., mean(std::vector {0}));
    EXPECT_EQ(1., mean(std::vector {1, 1, 1, 1}));
    EXPECT_EQ(2.5, mean(std::vector {1, 4}));
    EXPECT_EQ(2.5, mean(std::vector {1., 4.}));
  }
  TEST(MeanTest, Float) {
    EXPECT_EQ(2.5, mean(std::vector {1., 4.}));
  }
  TEST(MedianTest, Int) {
    EXPECT_EQ(0., median(std::vector {0}));
    EXPECT_EQ(1., median(std::vector {1}));
    EXPECT_EQ(2., median(std::vector {1, 2, 3}));
    EXPECT_EQ(2.5, median(std::vector {1, 2, 3, 4}));
  }
}
