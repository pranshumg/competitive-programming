#include <bits/stdc++.h>

using namespace std;

/* Peak element */

// TC - O(log n), SC - O(1)
int peak(vector<int>& v, int n) {
  // Edge Case: Array has only one element
  if (n == 1) return v[0];
  // Edge Case: Check if the first element is a peak (only one neighbor to the right)
  if (v[0] > v[1]) return v[0];
  // Edge Case: Check if the last element is a peak (only one neighbor to the left)
  if (v[n - 1] > v[n - 2]) return v[n - 1];
  // Search in the range [1, n-2] since we've already checked the boundaries
  int low = 1, high = n - 2;
  while (low <= high) {
    int mid = low + (high - low) / 2; 
    // Condition 1: If mid is greater than both neighbors, it's a peak
    if (v[mid - 1] < v[mid] && v[mid] > v[mid + 1]) {
      return v[mid];
    }
    // Condition 2: If we are on an increasing slope (left < mid)
    // The peak must be on the right side
    if (v[mid - 1] < v[mid]) {
      low = mid + 1;
    } 
    // Condition 3: If we are on a decreasing slope (left > mid) or at a local valley
    // The peak must be on the left side
    else {
      high = mid - 1;
    }
  } 
  return -1; // Should technically never be reached if logic is sound
}