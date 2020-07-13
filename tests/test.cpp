#include "gtest/gtest.h"
#include "lib.h"

namespace {

  TEST(ZeroTest, Zero) {
    EXPECT_EQ(0, return_zero());
  }
  TEST(MeanTest, Zero) {
    EXPECT_EQ(0, mean(std::vector {0}));
    EXPECT_EQ(1, mean(std::vector {1, 1, 1, 1}));
    EXPECT_EQ(2, mean(std::vector {1, 4}));
    EXPECT_EQ(2., mean(std::vector {1., 4.}));
  }
  TEST(MeanFloatTest, Zero) {
    EXPECT_EQ(2., mean(std::vector {1., 4.}));
  }
}
