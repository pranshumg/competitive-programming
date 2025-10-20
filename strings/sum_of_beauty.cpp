#include <bits/stdc++.h>

using namespace std;

/* Sum of beauty of all substrings */

// TC - O(n * n), SC - O(1)
pair<int, int> max_min(vector<int>& v) {
  int mini = INT_MAX, maxi = INT_MIN;
  for (auto it: v) {
    if (it != 0) {
      mini = min(mini, it);
      maxi = max(maxi, it);
    }
  }
  return {maxi, mini};
}

int beauty(string s) {
  int n = (int)s.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    vector<int> freq(26, 0);
    for (int j = i; j < n; ++j) {
      ++freq[s[j] - 'a'];
      pair<int, int> p = max_min(freq);
      ans += p.first - p.second;
    }
  }
  return ans;
}