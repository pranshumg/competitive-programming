#include <bits/stdc++.h>

using namespace std;

/* Search in rotated sorted array - 2 */

// TC - O(log n), SC - O(1)
bool search(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] == target) {
      return true;
    }
    // Edge Case: When low, mid, and high are all equal.
    // We cannot determine which half is sorted, so we shrink both ends.
    if (v[low] == v[mid] && v[mid] == v[high]) {
      ++low;
      --high;
      continue;
    }
    // Identify which half is sorted
    if (v[low] <= v[mid]) {
      // Left half [low...mid] is sorted
      if (v[low] <= target && target <= v[mid]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } else {
      // Right half [mid...high] is sorted
      if (v[mid] <= target && target <= v[high]) {
        low = mid + 1;
      } else {
        high = mid - 1;
      }
    }
  }
  return false;
}