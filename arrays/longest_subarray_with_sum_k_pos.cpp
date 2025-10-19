#include <bits/stdc++.h>

using namespace std;

/* Longest subarray with sum k */
// Brute (TC - O(n²), SC - O(1))
int longest_subarray(vector<int>& v, int n, int k) {
  int len = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += v[j];
      if (sum == k) {
        len = max(len, j - i + 1);
      }
    }
  }
  return len;
}

// Better (TC - O(n), SC - O(n))
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

// Optimal (TC - O(n), SC - O(1))
int longest_subarray(vector<int>& v, int n, int k) {
  int left = 0, right = 0, len = 0, sum = v[0];
  while (right < n) {
    while (left <= right && sum > k) {
      sum -= v[left++];
    }
    if (sum == k) {
      len = max(len, right - left + 1);
    }
    right++;
    if (right < n) {
      sum += v[right];
    }
  }
  return len;
}
