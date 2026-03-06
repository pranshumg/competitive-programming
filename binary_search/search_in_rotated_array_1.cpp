#include <bits/stdc++.h>

using namespace std;

/* Search in rotated sorted array - 1 */

// TC - O(log n), SC - O(1)
int search(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] == target) {
      return mid;
    }
    // Identify which half is sorted
    if (v[low] <= v[mid]) {
      // Left half [low...mid] is sorted
      if (v[low] <= target && target <= v[mid]) {
        // Target is within the sorted left range
        high = mid - 1;
      } else {
        // Target must be in the right half
        low = mid + 1;
      }
    } else {
      // Right half [mid...high] is sorted
      if (v[mid] <= target && target <= v[high]) {
        // Target is within the sorted right range
        low = mid + 1;
      } else {
        // Target must be in the left half
        high = mid - 1;
      }
    }
  }
  return -1;
}