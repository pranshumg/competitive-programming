#include <bits/stdc++.h>

using namespace std;

/* Allocate books */

/**
 * Helper function to determine how many partitions 
 * are required if each student can carry a maximum sum of 'mx'.
 */
int check(vector<int>& v, int mx) {
  int cnt = 1, sum = 0;
  for (int i : v) {
    // If current book fits in the current person's limit, add it
    if (sum + i <= mx) sum += i;
    else {
      // Otherwise, start a new person's allocation with this book
      sum = i;
      ++cnt;
    }
  }
  return cnt;
}

// TC - O(n * (log(sum(v) - max(v)))), SC - O(1)
int allocate(vector<int>& v, int n, int m) {
  // If there are more people than books, it's impossible (assuming 1 book per person min)
  if (n < m) return -1;
  int low = 0, high = 0;
  // Initialize 'low' as the largest single element and 'high' as the total sum
  for (int i : v) {
    low = max(low, i);
    high += i;
  }
  while (low <= high) {
    int mid = low + (high - low) / 2; 
    // If 'mid' is a feasible limit for 'm' people, try to find a smaller limit
    if (check(v, mid) <= m) {
      high = mid - 1;
    } else {
      // If 'mid' requires more than 'm' people, we must increase the limit
      low = mid + 1;
    }
  }  
  // 'low' will hold the smallest possible maximum sum
  return low;
}