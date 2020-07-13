#include <vector>
#include <numeric>
int return_zero(){
  return 0;
}

int mean(std::vector<int> v){
  return std::accumulate(v.begin(), v.end(), 0);
}
