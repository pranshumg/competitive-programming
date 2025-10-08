#include <bits/stdc++.h>

using namespace std;

/* Rotate matrix/image by 90 degrees */
// Brute (TC - O(n²), SC - O(n²))
vector<vector<int>> rotate(vector<vector<int>>& v, int n, int m) {
  vector<vector<int>> ans(m, vector<int>(n));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      ans[j][(n - 1) - i] = v[i][j];
    }
  }
  return ans;
}

// Optimal (TC - O(n²), SC - O(1))
void rotate(vector<vector<int>>& v, int n, int m) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = i + 1; j < n; j++) {
      swap(v[i][j], v[j][i]);
    }
  }
  for (int i = 0; i < n; i++) {
    reverse(v[i].begin(), v[i].end());
  }
}
