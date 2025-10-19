#include <bits/stdc++.h>

using namespace std;

/* Merge overlapping intervals */
// Brute (TC - O(n log n), SC - O(n))
vector<vector<int>> merge(vector<vector<int>>& v, int n) {
  vector<vector<int>> ans;
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    int first = v[i][0], second = v[i][1];
    if (!ans.empty() && second <= ans.back()[1]) {
      continue;
    }
    for (int j = i + 1; j < n; j++) {
      if (v[j][0] <= second) {
        second = max(second, v[j][1]);
      } else {
        break;
      }
    }
    ans.push_back({first, second});
  }
  return ans;
}

// Optimal (TC - O(n log n), SC - O(n))
vector<vector<int>> merge(vector<vector<int>>& v, int n) {
  vector<vector<int>> ans;
  sort(v.begin(), v.end());
  for (int i = 0; i < n; i++) {
    if (ans.empty() || v[i][0] > ans.back()[1]) {
      ans.push_back(v[i]);
    } else {
      ans.back()[1] = max(ans.back()[1], v[i][1]);
    }
  }
  return ans;
}
