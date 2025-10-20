#include <bits/stdc++.h>

using namespace std;

/* Single number - 1 */

// TC - (n log n), SC - O(1)
int single(vector<int>& v) {
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

// TC - O(n), SC - O(1)
int single(vector<int> &v) {
  int ans = 0;
  for (auto it: v) {
    ans ^= it;
  }
  return ans;
}