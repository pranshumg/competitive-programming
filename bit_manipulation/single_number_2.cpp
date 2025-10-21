#include <bits/stdc++.h>

using namespace std;

/* Single number - 2 */

// TC - O(n log m + m) where m is the size of map, SC - O(m)
int single_number(vector<int>& v) {
  map<int, int> mp;
  for (auto it: v) {
    mp[it]++;
  } 
  for (auto it: mp) {
    if (it.second == 1) {
      return it.first;
    }
  }
}

// TC - O(n * 32), SC - O(1)
int single_number(vector<int>& v) {
  int ans = 0, n = (int)v.size();
  for (int bit_idx = 0; bit_idx < 32; ++bit_idx) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
      if (v[i] & (1 << bit_idx)) {
        ++cnt;
      }
    }
    if (cnt % 3 == 1) {
      ans = ans | (1 << bit_idx);
    }
  }
  return ans;
}

// TC - o(n log n + n / 3), SC - O(1) 
int single_number(vector<int>& v) {
  int n = (int)v.size();
  sort(v.begin(), v.end());
  for (int i = 1; i < n; i += 3) {
    if (v[i - 1] != v[i]) {
      return v[i - 1];
    }
  }
  return v.back();
}

// TC - O(n), SC - O(1)
int single_number(vector<int>& v) {
  int ones = 0, twos = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    ones = (ones ^ v[i]) & ~twos;
    twos = (twos ^ v[i]) & ~ones;
  }
  return ones;
}