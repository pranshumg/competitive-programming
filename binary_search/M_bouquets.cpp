#include <bits/stdc++.h>

using namespace std;

/* Minimum days to make m bouquets */

// Helper function to check if it's possible to make 'm' bouquets on a given 'day'.
int count(vector<int>& v, int day, int k) {
  int tot = 0, cnt = 0;
  for (int i : v) {
    // If the flower's bloom day is less than or equal to the current day
    if (i <= day) {
      ++cnt;
      // Once we hit 'k' adjacent flowers, we form one bouquet
      if (cnt == k) {
        ++tot;
        cnt = 0; // Reset count for the next potential bouquet
      }
    } else {
      // The sequence is broken; reset count because bouquets must be contiguous
      cnt = 0;
    }
  }
  return tot; 
}

// TC - O(n * log(max(v) - min(v))), SC - O(1)
int min_days(vector<int>& v, int n, int m, int k) {
  // Edge case: If total required flowers (m * k) exceeds available flowers (n), return -1.
  if (int64_t(m) * k > n) return -1;
  // The range of days starts from the earliest bloom to the latest bloom.
  int low = *min_element(v.begin(), v.end());
  int high = *max_element(v.begin(), v.end());
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Check if we can make at least 'm' bouquets on day 'mid'
    if (count(v, mid, k) >= m) {
      // If yes, try to see if a smaller number of days (earlier) works
      high = mid - 1;
    } else {
      // If no, we need more time for flowers to bloom
      low = mid + 1;
    }
  }
  // 'low' will settle on the minimum day where the condition (count >= m) is true
  return low;
}