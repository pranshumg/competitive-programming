#include <bits/stdc++.h>

using namespace std;

/* Maximal rectangle */

int largest(vector<int>& v) {
  int n = (int)v.size();
  stack<int> sk;
  int ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && v[sk.top()] > v[i]) {
      int idx = sk.top();
      sk.pop();
      int nse = i, pse = (sk.empty() ? -1 : sk.top());;
      ans = max(ans, v[idx] * (nse - pse - 1));
    } 
    sk.push(i);
  }
  while (!sk.empty()) {
    int idx = sk.top();
    sk.pop();
    int nse = n, pse = (sk.empty() ? -1 : sk.top());
    ans = max(ans, v[idx] * (nse - pse - 1));
  }
  return ans;
}

// TC - O(n * m), SC - O(n * m)
int maximal(vector<vector<int>>& v) {
  int n = (int)v.size();
  int m = (int)v[0].size();
  vector<vector<int>> prefix_sum(n, vector<int>(m));
  for (int j = 0; j < m; ++j) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
      sum += v[i][j];
      if (v[i][j] == 0) {
        sum = 0;
      }
      prefix_sum[i][j] = sum;
    }
  }
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    ans = max(ans, largest(prefix_sum[i]));
  }
  return ans;
}