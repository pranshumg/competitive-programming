#include <bits/stdc++.h>

using namespace std;

/* Fruits into baskets */

// TC - O(n * n), SC - O(1)
int max_fruits(vector<int>& v) {
  int ans = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    set<int> st;
    for (int j = i; j < n; ++j) {
      st.emplace(v[j]);
      if ((int)st.size() <= 2) {
        ans = max(ans, j - i + 1);
      } else {
        break;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int max_fruits(vector<int>& v) {
  int ans = 0, n = (int)v.size();
  int l = 0; 
  map<int, int> mp;
  for (int r = 0; r < n; ++r) {
    ++mp[v[r]];
    while ((int)mp.size() > 2) {
      --mp[v[l]];
      if (mp[v[l]] == 0) {
        mp.erase(v[l]);
      }
      ++l;
    }
    if ((int)mp.size() <= 2) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
} 

// TC - O(n), SC - O(1)
int max_fruits(vector<int>& v) {
  int ans = 0, n = (int)v.size();
  int l = 0; 
  map<int, int> mp;
  for (int r = 0; r < n; ++r) {
    ++mp[v[r]];
    if ((int)mp.size() > 2) {
      --mp[v[l]];
      if (mp[v[l]] == 0) {
        mp.erase(v[l]);
      }
      ++l;
    }
    if ((int)mp.size() <= 2) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
} 