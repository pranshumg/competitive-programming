#include <bits/stdc++.h>

using namespace std;

/* Jump game */

// TC - O(n), SC - O(1)
bool can_jump(vector<int>& v) {
  int n = (int)v.size();
  int max_idx = 0;
  for (int i = 0; i < n; ++i) {
    if (max_idx < i) {
      return false;
    }
    max_idx = max(max_idx, i + v[i]);
  }
  return true;
}