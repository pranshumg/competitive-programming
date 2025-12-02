#include <bits/stdc++.h>

using namespace std;

/* Count number of nice subarrays */

// TC - O(n * n), SC - O(1)
int total(vector<int>& v, int goal) {
  int n = (int)v.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = i; j < n; ++j) {
      sum += v[j] % 2;
      if (sum == goal) {
        ++ans;
      } else if (sum > goal) {
        break;
      }
    }
  }
  return ans;
}

int count_subarray(vector<int>& v, int k) {
  if (k < 0) {
    return 0;
  }
  int ans = 0, n = (int)v.size();
  int l = 0, sum = 0;
  for (int r = 0; r < n; ++r) {
    sum += v[r] % 2;
    while (sum > k) {
      sum -= v[l++] % 2;
    }
    ans += (r - l + 1); 
  }
  return ans;
}

// TC - O(n), SC - O(1)
int total(vector<int>& v, int k) {
  return count_subarray(v, k) - count_subarray(v, k - 1);
}