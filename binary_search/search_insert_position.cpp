#include <bits/stdc++.h>

using namespace std;

/* Search Insert Position: Finds the index where 'target' is or should be.
   TC - O(log n), SC - O(1)
*/
int search_insert_position(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    // Optimized midpoint to prevent overflow
    int mid = low + (high - low) / 2;
    if (v[mid] >= target) {
      // This is either the target or where the target would go.
      // Move left to see if there's an even earlier valid position.
      high = mid - 1;
    } else {
      // Too small, must look to the right.
      low = mid + 1;
    }
  }
  // 'low' points to the correct insertion index.
  return low;
}