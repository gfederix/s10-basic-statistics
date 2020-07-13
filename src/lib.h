#include <vector>
#include <numeric>
int return_zero(){
  return 0;
}

template <typename T>
T mean(std::vector<T> const & v){
  return std::accumulate(v.begin(), v.end(), 0) / v.size();
}

template <typename T>
int median (std::initializer_list<T> v) {
  return 0;
}
