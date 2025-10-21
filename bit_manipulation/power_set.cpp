#include <bits/stdc++.h>

using namespace std;

/* Power set */

// TC - O(2^n * n), SC - (2^n * n);
vector<vector<int>> subsets(vector<int>& v) {
  vector<vector<int>> ans;
  int n = (int)v.size();
  int subsets = 1 << n;
  for (int i = 0; i < subsets; ++i) {
    vector<int> tmp;
    for (int j = 0; j < n; ++j) {
      if (i & (1 << j)) {
        tmp.emplace_back(v[j]);
      }
    }
    ans.emplace_back(tmp);
  }
  return ans;
}