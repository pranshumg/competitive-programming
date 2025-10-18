#include <bits/stdc++.h>

using namespace std;

/* Minimum in rotated sorted array */
// TC - O(log n), SC - O(1)
int find_min(vector<int>& v, int n) {
  int low = 0, high = n - 1, ans = INT_MAX;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[low] <= v[high]) {
      ans = min(ans, v[low]);
      break;
    }
    if (v[low] <= v[mid]) {
      ans = min(ans, v[low]);
      low = mid + 1;
    } else {
      ans = min(ans, v[mid]);
      high = mid - 1;
    }
  }
  return ans;
}
