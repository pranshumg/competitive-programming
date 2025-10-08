#include <bits/stdc++.h>

using namespace std;

/* Count subarray sum equal k */
// Brute (TC - O(n3), SC - O(1))
int subarray_sum(vector<int>& v, int n, int k) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = 0;
        for (int l = i; l <= j; l++) {
          sum += v[l];
        }
        if (sum == k) {
          cnt++;
        }
      }
  }
  return cnt;
}

// Better (TC - O(n2), SC - O(1))
int subarray_sum(vector<int>& v, int n, int k) {
  int cnt = 0;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += v[j];
      if (sum == k) {
        cnt++;
      }
    }
  }
  return cnt;
}

// Optimal (TC - O(n), SC - O(n))
int subarray_sum(vector<int>& v, int n, int k) {
  int cnt = 0, sum = 0;
  unordered_map<int, int> pre_sum;
  pre_sum[0]++;
  for (int i = 0; i < n; i++) {
    sum += v[i];
    cnt += pre_sum[sum - k];
    pre_sum[sum]++;
  }
  return cnt;
}