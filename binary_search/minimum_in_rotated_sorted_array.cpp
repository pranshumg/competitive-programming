#include <bits/stdc++.h>

using namespace std;

/* Minimum in rotated sorted array */

// TC - O(log n), SC - O(1)
int minimum(vector<int>& v, int n) { 
  int low = 0, high = n - 1;
  int ans = 1e9; 
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Optimization: If the current search space [low...high] is already sorted,
    // then v[low] is the smallest element in this range.
    if (v[low] <= v[high]) {
      ans = min(ans, v[low]);
      break;
    }
    // Identify which half is sorted:
    // Case 1: Left half [low...mid] is sorted
    if (v[low] <= v[mid]) {
      // The smallest value in a sorted range is the first element (v[low])
      ans = min(ans, v[low]);
      // Search in the right half to see if a smaller element exists
      low = mid + 1;
    } 
    // Case 2: Right half [mid...high] is sorted
    else {
      // The smallest value in this range is v[mid]
      ans = min(ans, v[mid]);
      // Search in the left half
      high = mid - 1;
    }
  }
  return ans;
}