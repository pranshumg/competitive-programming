#include <bits/stdc++.h>

using namespace std;

/* Floor */
// TC - O(log n), SC - O(1)
int floor(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1, ans = -1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] <= target) {
      ans = mid, low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}
