#include <bits/stdc++.h>

using namespace std;

/* Longest substring without repeating characters */

// TC - O(n * n), SC - O(1)
int longest(string s) {
  int n = (int)s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    vector<int> v(256, 0);
    for (int j = i; j < n; ++j) {
      unsigned char c = s[j];
      if (v[c]) {
        break;
      }
      ans = max(ans, j - i + 1);
      v[c] = 1;
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(string s) {
  int n = (int)s.size();
  int ans = 0;
  vector<int> v(256, -1);
  int l = 0, r = 0;
  while (r < n) {
    unsigned char c = s[r];
    if (v[c] >= l) {
      l = v[c] + 1;
    }
    ans = max(ans, r - l + 1);
    v[c] = r++;
  }
  return ans;
}