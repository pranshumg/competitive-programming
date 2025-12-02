#include <bits/stdc++.h>

using namespace std;

/* Subarray with k different integers */

// TC - O(n * n), SC - O(n)
int total(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    map<int, int> mp;
    for (int j = i; j < n; ++j) {
      ++mp[v[j]];
      if ((int)mp.size() == k) {
        ++ans; 
      } else if ((int)mp.size() > k) {
        break;
      }
    }
  }
  return ans;
}

int count_subarray(vector<int>& v, int k) {
  if (k < 0) {
    return 0;
  }
  int ans = 0, n = (int)v.size();
  int l = 0;
  map<int, int> mp;
  for (int r = 0; r < n; ++r) {
    ++mp[v[r]];
    while ((int)mp.size() > k) {
      --mp[v[l]];
      if (mp[v[l]] == 0) {
        mp.erase(v[l]);
      }
      ++l;
    }
    ans += (r - l + 1); 
  }
  return ans;
}

// TC - O(n), SC - O(n)
int total(vector<int>& v, int k) {
  return count_subarray(v, k) - count_subarray(v, k - 1);
}