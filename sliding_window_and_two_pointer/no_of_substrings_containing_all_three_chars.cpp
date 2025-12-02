#include <bits/stdc++.h>

using namespace std;

/* Number of substrings containing all three characters */

// TC - O(n * n), SC - O(1)
int total(string s) {
  int n = (int)s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    vector<int> v(3, -1);
    for (int j = i; j < n; ++j) {
      ++v[s[j] - 'a'];
      if (v[0] != -1 && v[1] != -1 && v[2] != -1) {
        ++ans;
      }
    }
  }
  return ans;
}

// TC - O(n * n), SC - O(1)
int total(string s) {
  int n = (int)s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    vector<int> v(3, -1);
    for (int j = i; j < n; ++j) {
      ++v[s[j] - 'a'];
      if (v[0] != -1 && v[1] != -1 && v[2] != -1) {
        ans += (n - j);
        break;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int total(string s) {
  int n = (int)s.size();
  int ans = 0;
  vector<int> v(3, -1);
  for (int i = 0; i < n; ++i) {
    v[s[i]] = i;
    if (v[0] != -1 && v[1] != -1 && v[2] != -1) {
      ans += min(v[0], min(v[1], v[2])) + 1;
    }
  }
  return ans;
}