#include <vector>
#include <numeric>
int return_zero(){
  return 0;
}

template <typename T>
T mean(std::initializer_list<T> v){
  return std::accumulate(v.begin(), v.end(), 0) / v.size();
}
