#include <bits/stdc++.h>

using namespace std;

/* Aggressive cows */

/**
 * Greedy function to check if it's possible to place 'cows' 
 * with at least 'dist' distance between each other.
 */
bool check(vector<int>& v, int n, int dist, int cows) {
  int cnt = 1;      // Place the first cow in the first available stall
  int prev = v[0];  // Keep track of the last stall used
  for (int i = 1; i < n; ++i) {
    // If the current stall is far enough from the last placed cow...
    if (v[i] - prev >= dist) {
      ++cnt;        // Place another cow
      prev = v[i];  // Update the reference point
    }
    // Optimization: If we've placed enough cows, we're done early
    if (cnt >= cows) return true;
  }
  return false;
}

// TC - O(n log n + n * log(max(v) - min(v))),  SC - O(1)
int distance(vector<int>& v, int n, int cows) {
  // Sort stalls to ensure we can greedily place cows from left to right
  sort(v.begin(), v.end());
  // 'low' is the smallest possible gap (1)
  // 'high' is the largest possible gap (total range of stalls)
  int low = 1, high = v[n - 1] - v[0];
  while (low <= high) {
    int mid = low + (high - low) / 2; 
    
    if (check(v, n, mid, cows)) {
      // If 'mid' works, try a larger distance to maximize the minimum
      low = mid + 1;
    } else {
      // If 'mid' is too large, reduce the distance
      high = mid - 1;
    }
  }
  /**
   * We return 'high' because when the loop terminates, 'high' 
   * is the last value for which check() was true.
   */
  return high;
}