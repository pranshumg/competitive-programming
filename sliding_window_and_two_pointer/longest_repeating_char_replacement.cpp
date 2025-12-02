#include <bits/stdc++.h>

using namespace std;

/* Longest repeating character replacement */

int longest(string s, int k) {
  int n = (int)s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int max_freq = 0;
    vector<int> v(26, 0); 
    for (int j = i; j < n; ++j) {
      ++v[s[j] - 'A'];
      max_freq = max(max_freq, v[s[j] - 'A']);
      int changes = (j - i + 1) - max_freq;
      if (changes <= k) {
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
  int l = 0, max_freq = 0;
  vector<int> v(26, 0);
  for (int r = 0; r < n; ++r) {
    ++v[s[r] - 'A'];
    max_freq = max(max_freq, v[s[r] - 'A']);
    while ((r - l + 1) - max_freq > k) {
      --v[s[l] - 'A'];
      max_freq = 0;
      for (auto &it : v) {
        max_freq = max(max_freq, it);
      }
      ++l;
    }
    if ((r - l + 1) - max_freq <= k) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
int longest(string s, int k) {
  int ans = 0, n = (int)s.size();
  int l = 0, max_freq = 0;
  vector<int> v(26, 0);
  for (int r = 0; r < n; ++r) {
    ++v[s[r] - 'A'];
    max_freq = max(max_freq, v[s[r] - 'A']);
    if ((r - l + 1) - max_freq > k) {
      --v[s[l] - 'A'];
      max_freq = 0;
      ++l;
    }
    if ((r - l + 1) - max_freq <= k) {
      ans = max(ans, r - l + 1);
    }
  }
  return ans;
}