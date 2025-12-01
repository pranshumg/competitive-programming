#include <bits/stdc++.h>

using namespace std;

/* Longest subarray with sum <= k */

// TC - O(n * n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    int sum = 0;
    for (int j = i; j < n; ++j) {
      sum += v[j];
      if (sum <= k) {
        ans = max(ans, j - i + 1);
      } else {
        break;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  int l = 0, r = 0, sum = 0;
  while (r < n) {
    sum += v[r];
    while (sum > k) {
      sum -= v[l++];
    }
    if (sum <= k) {
      ans = max(ans, r - l + 1);
    }
    ++r;
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  int l = 0, r = 0, sum = 0;
  while (r < n) {
    sum += v[r];
    if (sum > k) {
      sum -= v[l++];
    }
    if (sum <= k) {
      ans = max(ans, r - l + 1);
    }
    ++r;
  }
  return ans;
}