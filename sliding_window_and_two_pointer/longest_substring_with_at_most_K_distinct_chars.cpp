#include <bits/stdc++.h>

using namespace std;

/* Longest substring with at most k distinct characters */

// TC - O(n * n), SC - O(1)
int longest(string s, int k) {
  int ans = 0, n = (int)s.size();
  for (int i = 0; i < n; ++i) {
    map<char, int> mp;
    for (int j = i; j < n; ++j) {
      ++mp[s[j]];
      if ((int)mp.size() <= k) {
        ans = max(ans, j - i + 1);
      } else {
        break;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(string s, int k) {
  int ans = 0, n = (int)s.size();
  int l = 0;
  map<char, int> mp;
  for (int r = 0; r < n; ++r) {
    ++mp[s[r]];
    while ((int)mp.size() > k) {
      --mp[s[l]];
      if (mp[s[l]] == 0) {
        mp.erase(s[l]);
      }
      ++l;
    }
    if ((int)mp.size() <= k) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(string s, int k) {
  int ans = 0, n = (int)s.size();
  int l = 0;
  map<char, int> mp;
  for (int r = 0; r < n; ++r) {
    ++mp[s[r]];
    if ((int)mp.size() > k) {
      --mp[s[l]];
      if (mp[s[l]] == 0) {
        mp.erase(s[l]);
      }
      ++l;
    }
    if ((int)mp.size() <= k) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
}