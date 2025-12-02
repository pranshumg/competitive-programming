#include <bits/stdc++.h>

using namespace std;

/* Maximum consecutive ones 3 */

// TC - O(n * n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  for (int i = 0; i < n; ++i) {
    int zeros = 0;
    for (int j = i; j < n; ++j) {
      if (v[j] == 0) {
        ++zeros;
      }
      if (zeros <= k) {
        ans = max(ans, j - i + 1);
      } else {
        break;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  int l = 0, r = 0, zeros = 0;
  while (r < n) {
    if (v[r] == 0) {
      ++zeros;
    }
    while (zeros > k) {
      if (v[l] == 0) {
        --zeros;
      }
      ++l;
    }
    if (zeros <= k) {
      ans = max(ans, r - l + 1);
    }
    ++r;
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(vector<int>& v, int k) {
  int ans = 0, n = (int)v.size();
  int l = 0, r = 0, zeros = 0;
  while (r < n) {
    if (v[r] == 0) {
      ++zeros;
    }
    if (zeros > k) {
      if (v[l] == 0) {
        --zeros;
      }
      ++l;
    }
    if (zeros <= k) {
      ans = max(ans, r - l + 1);
    }
    ++r;
  }
  return ans;
}