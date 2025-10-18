#include <bits/stdc++.h>

using namespace std;

/* Maximum consecutive ones */
// TC - O(n), SC - O(1)
int max_consecutive_ones(vector<int>& v, int n) {
  int ans = 0, cnt = 0;
  for (int i = 0; i < n; i++) {
    if (v[i] == 1) {
      cnt++;
    } else {
      cnt = 0;
    }
    ans = max(ans, cnt);
  }
  return ans;
}
