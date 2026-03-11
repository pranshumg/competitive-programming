#include <bits/stdc++.h>

using namespace std;

/* Split array into k subarrays such that the maximum subarray sum is minimum */

/**
 * Helper function to greedily count how many subarrays 
 * are needed if the maximum allowed sum for any subarray is 'mx'.
 */
int check(vector<int>& v, int mx) {
  int cnt = 1, sum = 0;
  for (int i : v) {
    // If adding the current element doesn't exceed 'mx', keep adding to current sum
    if (sum + i <= mx) sum += i;
    else {
      // If 'mx' is exceeded, start a new subarray/count for a new person
      sum = i;
      ++cnt;
    }
  }
  return cnt;
}

// TC - O(n * log(sum(v) - max(v))), SC - O(1)
int split(vector<int>& v, int n, int k) {
  // Edge case: If k exceed n, and each must have at least one
  if (n < k) return -1;  
  int low = 0, high = 0;
  // Initialize 'low' as the largest single element (minimum possible answer)
  // Initialize 'high' as the total sum of elements (maximum possible answer)
  for (int i : v) {
    low = max(low, i);
    high += i;
  }
  while (low <= high) {
    int mid = low + (high - low) / 2; 
    // If it's possible to split into 'k' or fewer parts with max sum 'mid'
    if (check(v, mid) <= k) {
      // Try to find a smaller (better) maximum sum
      high = mid - 1;
    } else {
      // Current 'mid' is too small (requires too many splits), increase the limit
      low = mid + 1;
    }
  }
  // After the loop, 'low' will be the smallest valid maximum sum
  return low;
}