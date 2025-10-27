#include <bits/stdc++.h>

using namespace std;

/* Assign cookies */

// TC - O(n log n + m log m), SC - O(1)
int assign_cookies(vector<int> &greed, vector<int> &size) {
  int n = (int)greed.size(), m = (int)size.size();
  sort(greed.begin(), greed.end());
  sort(size.begin(), size.end());
  int left = 0, right = 0;
  while (left < m && right < n) {
    if (greed[right] <= size[left]) {
      ++right;
    }
    ++left;
  }
  return right;
}