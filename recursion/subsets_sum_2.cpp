#include <bits/stdc++.h>

using namespace std;

/* Subsets sum 2 */

void find_subsets(int idx, vector<int>& v, vector<int>& tmp, vector<vector<int>>& ans) {
  ans.emplace_back(tmp);
  for (int i = idx; i < (int)v.size(); ++i) {
    if (i > idx && v[i] == v[i - 1]) {
      continue;
    }
    tmp.emplace_back(v[i]);
    find_subsets(i + 1, v, tmp, ans);
    tmp.pop_back();
  }
}

// TC - O(2^n * n), SC - O(2^n * k)
vector<vector<int>> subsets(vector<int>& v) {
  vector<vector<int>> ans;
  vector<int> tmp;
  sort(v.begin(), v.end());
  find_subsets(0, v, tmp, ans);
  return ans;
}