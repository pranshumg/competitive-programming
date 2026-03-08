#include <bits/stdc++.h>

using namespace std;

/* Find the nth root of an integer */

// Helper Function: Binary Exponentiation (Fast Power)
// Computes x^y in O(log y).
int f(int x, int y) {
  int ans = 1;
  while (y) {
    // If y is odd, multiply the current result by x
    if (y & 1) {
      ans *= x;
    }
    // Square the base and halve the exponent
    x *= x;
    y >>= 1; 
  }
  return ans;
}

// TC - O(log m * log n), SC - O(1)
int nth_root(int n, int m) {
  // Edge case: nth root of 1 is always 1
  if (m == 1) return 1;
  int low = 1, high = m;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    int root = f(mid, n);
    if (root == m) {
      return mid; // Found the exact integer root
    } else if (root < m) {
      low = mid + 1; // mid^n is too small, search higher
    } else {
      high = mid - 1; // mid^n is too large, search lower
    }
  }
  return -1; // No perfect integer nth root found
}