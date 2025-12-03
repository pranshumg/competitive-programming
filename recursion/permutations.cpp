#include <bits/stdc++.h>

using namespace std;

/* Print all permutations */

void find_permutations(vector<int>& v, vector<int>& tmp, vector<int>& freq, vector<vector<int>>& ans) {
  if ((int)tmp.size() == (int)v.size()) {
    ans.emplace_back(tmp);
    return;
  }
  for (int i = 0; i < (int)v.size(); ++i) {
    if (!freq[i]) {
      freq[i] = 1;
      tmp.emplace_back(v[i]);
      find_permutations(v, tmp, freq, ans);
      tmp.pop_back();
      freq[i] = 0;
    }
  }
}

// TC - O(n * n!), SC - O(n)
vector<vector<int>> permutations(vector<int>& v) {
  vector<vector<int>> ans;
  vector<int> tmp, freq((int)v.size(), 0);
  find_permutations(v, tmp, freq, ans);
  return ans;
}


void find_permutation(int idx, vector<int>& v, vector<vector<int>>& ans) {
  if (idx == (int)v.size()) {
    ans.emplace_back(v);
    return;
  }
  for (int i = idx; i < (int)v.size(); ++i) {
    swap(v[idx], v[i]);
    find_permutation(idx + 1, v, ans);
    swap(v[idx], v[i]);
  }
}

// TC - o(n * n!), SC - O(n)
vector<vector<int>> permutations(vector<int>& v) {
  vector<vector<int>> ans;
  find_permutation(0, v, ans);
  return ans;
}