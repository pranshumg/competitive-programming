#include <bits/stdc++.h>

using namespace std;

/* Subsequences with sum k */

// Print all
// TC - O(2^n), SC - O(n)
void print(int idx, int k, vector<int>& v, vector<int>& tmp, vector<vector<int>>& ans, int sum) {
  if (idx == (int)v.size()) {
    if (sum == k) {
      ans.emplace_back(tmp);
    }
    return;
  }
  tmp.emplace_back(v[idx]);
  sum += v[idx];
  print(idx + 1, k, v, tmp, ans, sum);
  sum -= v[idx];
  tmp.pop_back();
  print(idx + 1, k, v, tmp, ans, sum);
}

// Print one
// TC - O(2^n), SC - O(n)
bool print(int idx, int k, vector<int>& v, vector<int>& tmp, vector<int>& ans, int sum) {
  if (idx == (int)v.size()) {
    if (sum == k) {
      ans.insert(ans.end(), tmp.begin(), tmp.end());
      return true;
    }
    return false;
  }
  tmp.emplace_back(v[idx]);
  sum += v[idx];
  if (print(idx + 1, k, v, tmp, ans, sum)) {
    return true;
  }
  sum -= v[idx];
  tmp.pop_back();
  if (print(idx + 1, k, v, tmp, ans, sum)) {
    return true;
  }
  return false;
}

// Count subsequences
// TC - O(2^n), SC - O(n)
int count(int idx, int k, vector<int>& v, vector<int>& tmp, int sum) {
  if (idx == (int)v.size()) {
    if (sum == k) {
      return 1;
    }
    return 0;;
  }
  tmp.emplace_back(v[idx]);
  sum += v[idx];
  int l = count(idx + 1, k, v, tmp, sum);
  sum -= v[idx];
  tmp.pop_back();
  int r = count(idx + 1, k, v, tmp, sum);
  return l + r;
}