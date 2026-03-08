#include <bits/stdc++.h>

using namespace std;

/* Finds the floor of the square root of n */

// TC - O(log n), SC - O(1)
int sqrt(int n) {
  // Initial search range from 1 to n
  int low = 1, high = n;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Check if mid squared is within the target n
    if (mid * mid <= n) {
      // If mid squared is <= n, mid could be the answer, 
      // but there might be a larger value on the right side
      low = mid + 1;
    } else {
      // If mid squared > n, the answer must be on the left side
      high = mid - 1;
    }
  }
  // When the loop ends, 'high' will be pointing to the largest integer,
  // whose square is less than or equal to n.
  return high;
}