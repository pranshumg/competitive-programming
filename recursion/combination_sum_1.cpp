#include <bits/stdc++.h>

using namespace std;

/* Combination sum 1 */

void find_combination(int idx, int target, vector<int>& v, vector<vector<int>>& ans, vector<int>& tmp) {
  if (idx == (int)v.size()) {
    if (target == 0) {
      ans.emplace_back(tmp);
    }
    return;
  }
  if (v[idx] <= target) {
    tmp.emplace_back(v[idx]);
    find_combination(idx, target - v[idx], v, ans, tmp);
    tmp.pop_back();
  }
  find_combination(idx + 1, target, v, ans, tmp);
}

vector<vector<int>> combination(vector<int>& v, int target) {
  vector<int> tmp;
  vector<vector<int>> ans; 
  find_combination(0, target, v, ans, tmp);
  return ans;
}