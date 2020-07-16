#include <vector>
#include <numeric>
#include <unordered_set>
#include <istream>
#include <iterator>

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


template <typename T>
int moda (std::vector<T> v) {
  std::unordered_map<T, int> m;
  for (auto const & x: v){
    m.try_emplace(x, 0);
    m[x]++;
  }
  std::vector<T>  ret;
  int count = m[0];
  for (auto const & [v, c]: m){
    if (count < c){
      ret.clear();
      count = c;
    }
    if (count == c){
      ret.push_back(v);
    }
  }
  sort(ret.begin(), ret.end());
  return ret[0];
}

class DoubleVecInput {
 public:
  int size;
  std::vector<int> first;
  std::vector<int> second;

  DoubleVecInput(std::istream& is){
    is >> size;
    std::istream_iterator<int> eos;
    std::copy_n(std::istream_iterator<int>{is}, size, std::back_inserter(first));
    std::copy_n(std::istream_iterator<int>{is}, size, std::back_inserter(second));
  };
};
