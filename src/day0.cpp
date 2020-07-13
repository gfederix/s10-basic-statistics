#include <iostream>
#include <algorithm>
#include <iterator>

#include "lib.h"

int main(){
  int numbers_count;
  std::cin >> numbers_count;
  std::istream_iterator<int> eos;
  std::istream_iterator<int> iit (std::cin);
  std::vector<int> values(iit, eos);
  std::cout << mean(values) << "\n"
            << median(values) << "\n"
            << moda(values) << "\n";
};
