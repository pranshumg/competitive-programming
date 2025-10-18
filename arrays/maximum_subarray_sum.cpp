#include <bits/stdc++.h>

using namespace std;

/* Maximum subarray sum */
// Brute (TC - O(n³), SC - O(1))
int max_subarray_sum(vector<int>& v, int n) {
  int ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int sum = 0;
      for (int k = i; k <= j; k++) {
        sum += v[k];
      }
      ans = max(ans, sum);
    }
  }
  return ans;
}

// Better (TC - O(n²), SC - O(1))
int max_subarray_sum(vector<int>& v, int n) {
  int ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    int sum = 0;
    for (int j = i; j < n; j++) {
      sum += v[j];
      ans = max(ans, sum);
    }
  }
  return ans;
}

// Kadane's Algorithm (Optimal)
// TC - O(n), SC - O(1)
int max_subarray_sum(vector<int>& v, int n) {
  int ans = v[0], sum = v[0], low = 0, ans_low = -1, ans_high = -1;
  for (int i = 1; i < n; i++) {
    if (sum + v[i] < v[i]) {
      sum = v[i], low = i;
    } else {
      sum += v[i];
    }
    if (sum > ans) {
      ans = sum;
      ans_low = low, ans_high = i;
    }
  }
  return ans;
}
