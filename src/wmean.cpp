#include <iostream>
#include <algorithm>
#include <iterator>
#include <iomanip>
#include <numeric>
#include "lib.h"

int main(){
  int numbers_count;
  std::cin >> numbers_count;
  std::istream_iterator<int> eos;
  std::istream_iterator<int> iit (std::cin);
  std::ostream_iterator<int> oit(std::cout, ", ");
  std::vector<int> values;
  std::vector<int> weights;
  std::copy_n( std::istream_iterator<int>{iit},
               numbers_count, std::back_inserter(weights));
  std::copy_n(std::istream_iterator<int>{iit},
              numbers_count, std::back_inserter(values));
  int rez = 0;
  for (auto i = 0; i < numbers_count; i++) {
    std::cout << "v: " << values[i] << "  w: "  <<  weights[i] << "\n";
    rez += values[i]*weights[i];
  }
  double weights_sum = std::accumulate(weights.begin(), weights.end(), 0);
  std::cout << std::fixed;
  std::cout << std::setprecision(1);
  std::cout << rez / weights_sum <<"\n";
};
