#include <bits/stdc++.h>

using namespace std;

/* Finds how many times a sorted array has been rotated */

// TC - O(log n), SC - O(1)
int times(vector<int>& v, int n) { 
  int low = 0, high = n - 1;
  int mn = 1e9, idx = 0;  
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Optimization: If the current range [low...high] is already sorted
    if (v[low] <= v[high]) {
      if (v[low] < mn) {
        mn = v[low];
        idx = low;
      }
      break; // Entire range is processed
    }
    // Identify the sorted half to eliminate it or find the minimum
    if (v[low] <= v[mid]) {
      // Left half [low...mid] is sorted; minimum is at 'low'
      if (v[low] < mn) {
        mn = v[low];
        idx = low;
      }
      // Eliminate left half and search in the right half
      low = mid + 1;
    } else {
      // Right half [mid...high] is sorted; minimum is at 'mid'
      if (v[mid] < mn) {
        mn = v[mid];
        idx = mid;
      }
      // Eliminate right half and search in the left half
      high = mid - 1;
    }
  }
  return idx; // This index represents the rotation count
}