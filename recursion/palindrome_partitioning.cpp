#include <bits/stdc++.h>

using namespace std;

/* Palindrome partitioning */

bool is_palindrome(string& s, int l, int r) {
  while (l <= r) {
    if (s[l++] != s[r--]) {
      return false;
    }
  }
  return true;
}

void solve(int idx, string& s, vector<string>& path, vector<vector<string>>& ans) {
  if (idx == (int)s.size()) {
    ans.emplace_back(path);
    return;
  }
  for (int i = idx; i < (int)s.size(); ++i) {
    if (is_palindrome(s, idx, i)) {
      path.emplace_back(s.substr(idx, i - idx + 1));
      solve(i + 1, s, path, ans);
      path.pop_back();
    }
  }
}

vector<vector<string>> partition(string s) {
  vector<vector<string>> ans;
  vector<string> path;
  solve(0, s, path, ans);
  return ans;
}