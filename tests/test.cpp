#include "gtest/gtest.h"
#include "lib.h"

namespace {

TEST(ZeroTest, Zero) {
  EXPECT_EQ(0, return_zero());
}

TEST(MeanTest, Zero) {
  EXPECT_EQ(0, mean({}));
  EXPECT_EQ(1, mean({1}));
}

}
