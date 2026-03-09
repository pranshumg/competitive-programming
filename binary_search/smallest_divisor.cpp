#include <bits/stdc++.h>

using namespace std;

/* Find the smallest divisor given a threshold */

// Helper function to calculate the sum of division results.
int sum(vector<int>& v, int div) {
  int s = 0;
  for (int i : v) {
    // Standard trick for ceil(i / div) without using floating point:
    s += (i + div - 1) / div;
  }
  return s;
}

int divisor(vector<int>& v, int n, int threshold) {
  // Range starts at 1 (smallest possible divisor) 
  // and ends at the largest element in the array.
  int low = 1, high = *max_element(v.begin(), v.end());
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // As the divisor increases, the sum decreases (monotonic relationship).
    if (sum(v, mid) <= threshold) {
      // If the sum is within the threshold, try to find an even smaller divisor.
      high = mid - 1;
    } else {
      // If the sum is too large, we need a larger divisor to reduce the sum.
      low = mid + 1;
    }
  }
  // 'low' will be the smallest divisor that satisfies the condition.
  return low;
}