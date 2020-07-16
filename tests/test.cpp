#include "gtest/gtest.h"
#include <sstream>
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

  TEST(ModaTest, Int) {
    EXPECT_EQ(3, moda(std::vector {3, 3, 0, 1, 2, 3, 4}));
  }
  TEST(ModaTest, SelectSmallestModaIfThemFew) {
    EXPECT_EQ(1, moda(std::vector {1, 2, 3, 4, 5, 6}));
    EXPECT_EQ(2, moda(std::vector {1, 2, 2, 3, 3}));
    EXPECT_EQ(2, moda(std::vector {1, 3, 3, 2, 2}));
  }

  TEST(InputTest, ZeroVectors) {
    std::istringstream is ("0\n\n\n");
    DoubleVecInput input(is);
    EXPECT_EQ(input.size,0);
    EXPECT_EQ(input.first, std::vector<int>{});
    EXPECT_EQ(input.second, std::vector<int>{});

  }
  TEST(InputTest, NonZeroVectors) {
    std::istringstream is ("4 200 3 4 5\n6 7 8 9\n");
    DoubleVecInput input(is);
    EXPECT_EQ(input.size, 4);
    EXPECT_EQ(input.first, (std::vector<int>{200, 3, 4, 5}));
    EXPECT_EQ(input.second, (std::vector<int>{6, 7, 8, 9}));
  }
}
