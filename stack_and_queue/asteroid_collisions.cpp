#include <bits/stdc++.h>

using namespace std;

/* Asteroid collisions */

// TC - O(n), SC - O(1)
vector<int> asteroid(vector<int>& v) {
  int n = (int)v.size();
  vector<int> ans;
  for (int i = 0; i < n; ++i) {
    if (v[i] > 0) {
      ans.emplace_back(v[i]);
    } else {
      while (!ans.empty() && ans.back() > 0 && ans.back() < abs(v[i])) {
        ans.pop_back();
      }
      if (!ans.empty() && ans.back() == abs(v[i])) {
        ans.pop_back();
      } else if (ans.empty() || ans.back() < 0) {
        ans.emplace_back(v[i]);
      }
    }
  }
  return ans;
}