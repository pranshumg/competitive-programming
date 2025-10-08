#include <bits/stdc++.h>

using namespace std;

/* Koko eating bananas */
// TC - O(n * log(max(v))), SC - O(1)
int ceil_div(int a, int b) {
  return (a + b - 1) / b;
}

int total(vector<int>& v, int n, int h) {
  int ans = 0;
  for (int i = 0; i < n; i++) {
    ans += ceil_div(v[i], h);
  }
  return ans;
}

int min_eating_speed(vector<int>& v, int n, int h) {
  int low = 1, high = *(max_element(v.begin(), v.end()));
  while (low <= high) {
    int mid = (low + high) / 2;
    int total_h = total(v, n, mid);
    if (total_h <= h) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }      
  return low;
}
