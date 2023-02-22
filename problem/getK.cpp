#include <vector>
/*
 * Get the k of order in a vector
 */
int partion(std::vector<int>& vec, int start, int end) {
  int val = vec.at(start);
  int i = start;
  int j = end;
  while (i < j) {
    while (i < j && vec.at(j) >= val) {
      --j;
    }
    if(i < j) {
      vec.at(i) = vec.at(j);
      ++i;
    }

    while (i <j && vec.at(i) >= val) {
      ++i;
    }

    if(i < j) {
      vec.at(j) = vec.at(i);
      --j;
    }
  }
  vec.at(i) = val;
  return i;
}

int getval(std::vector<int>& vec, int start, int end, int k) {
  int pos = partion(vec,start,end);
  if(pos == k) {
    return vec[k];
  }
  if(pos < k) {
    return getval(vec,pos+1,end,k);
  } else {
    return getval(vec,start,pos-1,k);
  }

}
int getK(std::vector<int>& vec, int k) {
  int n = vec.size();
  int val = getval(vec,0,n-1,k-1);
  return val;
}
