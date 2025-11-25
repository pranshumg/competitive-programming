#include <bits/stdc++.h>

using namespace std;

/* Trapping rainwater */

vector<int> find_prefix_max(vector<int>& v) {
  int n = (int)v.size();
  vector<int> prefix_max(n);
  prefix_max[0] = v[0];
  for (int i = 1; i < n; ++i) {
    prefix_max[i] = max(v[i], prefix_max[i - 1]);
  }
  return prefix_max;
}

vector<int> find_suffix_max(vector<int>& v) {
  int n = (int)v.size();
  vector<int> suffix_max(n);
  suffix_max[n - 1] = v[n - 1];
  for (int i = n - 2; i >= 0; --i) {
    suffix_max[i] = max(v[i], suffix_max[i + 1]);
  }
  return suffix_max;
}

// TC - O(n), SC - O(n)
int trap(vector<int>& v) {
  vector<int> prefix_max = find_prefix_max(v);
  vector<int> suffix_max = find_suffix_max(v);
  int total = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    if (v[i] < prefix_max[i] && v[i] < suffix_max[i]) {
      total += min(prefix_max[i], suffix_max[i]) - v[i];
    }
  }
  return total;
}

// TC - O(n), SC - O(1)
int trap(vector<int>& v) {
  int left_max = 0;
  int right_max = 0;
  int n = (int)v.size();
  int l = 0, r = n - 1;
  int total = 0;
  while (l < r) {
    if (v[l] <= v[r]) {
      if (left_max > v[l]) {
        total += left_max - v[l];
      } else {
        left_max = v[l];
      }
      ++l;
    } else {
      if (right_max > v[r]) {
        total += right_max - v[r];
      } else {
        right_max = v[r];
      }
      --r;
    }
  }
  return total;
}