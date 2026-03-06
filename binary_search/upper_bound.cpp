#include <bits/stdc++.h>

using namespace std;

/* Upper Bound: Finds the first index `i` such that v[i] > target.
   TC - O(log n), SC - O(1)
*/
int upper_bound(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] > target) {
      // This is a candidate for Upper Bound, but check 
      // if there's an even smaller index to the left.
      high = mid - 1;
    } else {
      // If v[mid] <= target, the upper bound must be further right.
      low = mid + 1;
    }
  }
  // 'low' will naturally settle at the first index where v[i] > target.
  return low;
}