#include <bits/stdc++.h>

using namespace std;

/* Minimum window substring */

// TC - O(n * n), SC - O(1)
string minimum(string s, string t) {
  int len = INT_MAX, idx = -1;
  int n = (int)s.size(), m = (int)t.size();
  for (int i = 0; i < n; ++i) {
    vector<int> v(256, 0);
    int cnt = 0;
    for (int j = 0; j < m; ++j) {
      unsigned char c = t[j];
      ++v[c]; 
    }
    for (int j = i; j < n; ++j) {
      unsigned char c = s[j];
      if (v[c] > 0) {
        ++cnt;
      }
      --v[c];
      if (cnt == m) {
        if (j - i + 1 < len) {
          len = j - i + 1;
          idx = i;
          break;
        }
      }
    }
  }
  return s.substr(idx, len);
}

// TC - O(n), SC - O(1) 
string minimum(string s, string t) {
  int len = INT_MAX, idx = -1;
  int n = (int)s.size(), m = (int)t.size();
  vector<int> v(256, 0);
  for (int i = 0; i < m; ++i) {
    unsigned char c = t[i];
    ++v[c];
  }
  int l = 0, cnt = 0;
  for (int r = 0; r < n; ++r) {
    unsigned char c = s[r];
    if (v[c] > 0) {
      ++cnt;
    }
    --v[c];
    while (cnt == m) {
      if (r - l + 1 < len) {
        len = r - l + 1;
        idx = l;
      }
      unsigned char d = s[l];
      ++v[d];
      if (v[d] > 0) {
        --cnt;
      }
      ++l;
    }
  }
  return (idx == -1 ? "" : s.substr(idx, len));
}