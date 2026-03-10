#include <bits/stdc++.h>

using namespace std;

/* Kth missing positve number */

// TC - O(log n), SC - O(1)
int kth_missing(vector<int>& v, int n, int k) {
  int low = 0, high = n - 1;  
  while (low <= high) {
    int mid = low + (high - low) / 2;
    /**
     * Logic: In an ideal array [1, 2, 3...], the value at index 'mid' 
     * should be (mid + 1). 
     * Therefore, (v[mid] - (mid + 1)) gives the count of missing numbers 
     * up to that index.
     */
    if (v[mid] - mid - 1 < k) {
      // Not enough missing numbers yet, look to the right.
      low = mid + 1;
    } else {
      // Too many or exactly k missing numbers, try to find a smaller index.
      high = mid - 1;
    }
  }
  /**
   * Final Result Calculation:
   * The k-th missing number is located between v[high] and v[low].
   * Formula: v[high] + (k - (missing numbers up to high))
   * Simplified: v[high] + k - (v[high] - high - 1)
   * Result: high + 1 + k  => which is equivalent to low + k
   */
  return low + k;
}