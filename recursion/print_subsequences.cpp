#include <bits/stdc++.h>

using namespace std;

/* Print all subsequences */

// Power set
// TC - O(2^n * n), SC - O(n);
void print(vector<int>& v, vector<vector<int>>& ans) {
  for (int i = 0; i < (1 << (int)v.size()); ++i) {
    vector<int> tmp;
    for (int j = 0; j < (int)v.size(); ++j) {
      if (i & (1 << j)) {
        tmp.emplace_back(v[j]);
      }
    }
    ans.emplace_back(tmp);
  }
}

// Recursive
// TC - O(2^n), SC - O(n)
void print(int idx, vector<int>& v, vector<int>& tmp, vector<vector<int>>& ans) {
  if (idx == (int)v.size()) {
    ans.emplace_back(tmp);
    return;
  }
  tmp.emplace_back(v[idx]);
  print(idx + 1, v, tmp, ans);
  tmp.pop_back();
  print(idx + 1, v, tmp, ans);
}