#include <bits/stdc++.h>

using namespace std;

/* Maximum Product Subarray */
// Brute (TC - O(n³), SC - O(1))
int max_product(vector<int>& v, int n) {
  int ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      int prod = 1;
      for (int k = i; k <= j; k++) {
        prod *= v[k];
      }
      ans = max(ans, prod);
    }
  }
  return ans;
}

// Better (TC - O(n²), SC - O(1))
int max_product(vector<int>& v, int n) {
  int ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    int prod = 1;
    for (int j = i; j < n; j++) {
      prod *= v[j];
      ans = max(ans, prod);
    }
  }
  return ans;
}

// Optimal (TC - O(n), SC - O(1))
int max_product(vector<int>& v, int n) {
  int prefix = 1, suffix = 1, ans = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (prefix == 0) {
      prefix = 1;
    }
    if (suffix == 0) {
      suffix = 1;
    }
    prefix *= v[i], suffix *= v[n - i - 1];
    ans = max(ans, max(prefix, suffix));
  }
  return ans;
}
