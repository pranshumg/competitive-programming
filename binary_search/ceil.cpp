#include <bits/stdc++.h>

using namespace std;

/* Ceil */
// TC - O(log n), SC - O(1)
int ceil(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, ans = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] >= target) {
      ans = mid, high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return ans;
}
