#include <bits/stdc++.h>

using namespace std;

/* Smallest divisor given a threshold */
// TC - O(n * log(max(v))), SC - O(1)
bool check(vector<int>& v, int threshold, int divisor) {
  int sum = 0;
  for (auto it: v) {
    sum += (it + divisor - 1) / divisor;
  }
  return sum <= threshold;
}

int smallest_divisor(vector<int>& v, int n, int threshold) {
  int low = 1, high = *(max_element(v.begin(), v.end()));
  while (low <= high) {
    int mid = (low + high) / 2;
    if (check(v, threshold, mid)) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return low;
}
