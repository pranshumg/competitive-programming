#include <bits/stdc++.h>

using namespace std;

/* Maximum points you can obtain from cards */

// TC - O(k), SC - O(1)
int max_points(vector<int>& v, int k) {
  int lsum = accumulate(v.begin(), v.begin() + k, 0);
  int rsum = 0, ans = lsum, r = (int)v.size() - 1;
  for (int i = k - 1; i >= 0; --i) {
    lsum -= v[i];
    rsum += v[r--];
    ans = max(ans, lsum + rsum);
  }
}