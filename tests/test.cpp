#include "gtest/gtest.h"
#include "lib.h"

namespace {

TEST(ZeroTest, Zero) {
  EXPECT_EQ(0, return_zero());
}

TEST(MeanTest, Zero) {
  EXPECT_EQ(0, mean({0}));
  EXPECT_EQ(1, mean({1, 1, 1, 1}));
  EXPECT_EQ(2, mean({1, 4}));
  EXPECT_EQ(2., mean({1., 4.}));

}

}
