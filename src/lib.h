#include <vector>
#include <numeric>
int return_zero(){
  return 0;
}

template <typename T>
double mean(std::vector<T> const & v){
  return std::accumulate(v.begin(), v.end(), 0.) / static_cast<double> (v.size());
}

template <typename T>
double median (std::vector<T> v) {
  std::sort(v.begin(), v.end());
  auto s = v.size();
  if (s % 2){
    return v[s / 2];
  }
  int second_pos = s / 2;
  return (v[second_pos - 1] + v[second_pos]) / 2.;
}
