#include <iostream>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <numeric>
#include "lib.h"

int main(){
  DoubleVecInput i{std::cin};
  auto values = i.first;
  auto weights = i.second;
  auto numbers_count = i.size;
  int rez = 0;
  for (auto i = 0; i < numbers_count; i++) {
    rez += values[i] * weights[i];
  }
  double weights_sum = std::accumulate(weights.begin(), weights.end(), 0);
  std::cout << std::fixed;
  std::cout << std::setprecision(1);
  std::cout << rez / weights_sum <<"\n";
};
