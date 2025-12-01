#include <bits/stdc++.h>

using namespace std;

/* Maximum sum of a k length subarray */

// TC - O(n), SC - O(1)
int max_sum(vector<int>& v, int k) {
  int n = (int)v.size();
  int sum = accumulate(v.begin(), v.begin() + k, 0);
  int ans = sum, l = 0, r = k;
  while (r < n) {
    sum -= v[l++];
    sum += v[r++];
    ans = max(ans, sum);
  }
  return ans;
}