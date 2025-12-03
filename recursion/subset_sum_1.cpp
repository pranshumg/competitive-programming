#include <bits/stdc++.h>

using namespace std;

/* Subset sum 1 */

void generate(int idx, int sum, vector<int>& v, vector<int>& ans) {
  if (idx == (int)v.size()) {
    ans.emplace_back(sum);
    return;
  }
  generate(idx + 1, sum + v[idx], v, ans);
  generate(idx + 1, sum, v, ans);
}

// TC - (2^n log 2^n), SC - O(2^n)
vector<int> subset_sum(vector<int>& v) {
  vector<int> ans;
  generate(0, 0, v, ans);
  sort(ans.begin(), ans.end());
  return ans;
}