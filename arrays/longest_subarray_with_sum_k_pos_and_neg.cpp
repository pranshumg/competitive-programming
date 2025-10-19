#include <bits/stdc++.h>

using namespace std;

/* Longest subarray with sum k (pos and neg) */
// Brute (TC - O(n²), SC - O(1))
int longest_subarray(vector<int>& v, int n, int k) {
  int len = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += v[i];
      if (sum == k) {
        len = max(len, j - i + 1);
      }
    }
  }
  return len;
}

// Optimal (TC - O(n), SC - O(n))
int longest_subarray(vector<int>& v, int n, int k) {
  unordered_map<int, int> pre_sum;
  int len = 0, sum = 0;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    if (sum == k) {
      len = max(len, i + 1);
    }
    if (pre_sum.find(sum - k) != pre_sum.end()) {
      len = max(len, i - pre_sum[sum - k]);
    }
    if (pre_sum.find(sum) == pre_sum.end()) {
      pre_sum[sum] = i;
    }
  }
  return len;
}
