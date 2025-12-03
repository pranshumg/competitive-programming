#include <bits/stdc++.h>

using namespace std;

/* Combination sum 2 */

void find_combination(int idx, int target, vector<int>& v, vector<vector<int>>& ans, vector<int>& tmp) {
  if (target == 0) {
    ans.emplace_back(tmp);
    return;
  }
  for (int i = idx; i < (int)v.size(); ++i) {
    if (i > idx && v[i] == v[i - 1]) {
      continue;
    }
    if (v[i] > target) {  
      break;
    }
    tmp.emplace_back(v[i]);
    find_combination(i + 1, target - v[i], v, ans, tmp);
    tmp.pop_back();
  }
}

vector<vector<int>> combination(vector<int>& v, int target) {
  sort(v.begin(), v.end());
  vector<int> tmp;
  vector<vector<int>> ans; 
  find_combination(0, target, v, ans, tmp);
  return ans;
}