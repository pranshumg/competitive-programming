#include <bits/stdc++.h>

using namespace std;

/* Median of two sorted arrays */

// APPROACH 1: Merge and Store
// TC -  O(n + m), SC -  O(n + m) 
double median(vector<int>& v1, int m, vector<int>& v2, int n) {
  vector<int> res;
  int i = 0, j = 0;
  // Standard merge process to combine two sorted arrays
  while (i < m && j < n) {
    if (v1[i] < v2[j]) {
      res.emplace_back(v1[i++]);
    } else {
      res.emplace_back(v2[j++]);
    }
  }
  // Add remaining elements from v1 if any
  while (i < n) res.emplace_back(v1[i++]);
  // Add remaining elements from v2 if any
  while (j < m) res.emplace_back(v2[j++]);
  // If total elements are odd, return the middle element
  if ((n + m) & 1) return res[(n + m) / 2];
  // If even, return average of the two middle elements
  return (res[(n + m) / 2] + res[(n + m) / 2 + 1]) / double(2);
}

// APPROACH 2: Optimized Space (Pointer Tracking)
// TC - O(n + m), SC - O(1) 
double median(vector<int>& v1, int n, vector<int>& v2, int m) {
  int cnt = 0;
  // Target indices for the median elements
  int idx1 = (n + m) / 2, idx2 = (n + m) / 2 + 1;
  int el1 = -1, el2 = -1;
  int i = 0, j = 0;
  // Iterate until we find the median positions without storing elements
  while (i < n && j < m) {
    if (v1[i] < v2[j]) {
      if (cnt == idx1) el1 = v1[i];
      if (cnt == idx2) el2 = v1[i];
      ++i;
    } else {
      if (cnt == idx1) el1 = v2[j];
      if (cnt == idx2) el2 = v2[j];
      ++j;
    }
    ++cnt;
  }
  // Handle remaining elements in v1
  while (i < n) {
    if (cnt == idx1) el1 = v1[i];
    if (cnt == idx2) el2 = v1[i];
    ++i;
    ++cnt;
  }
  // Handle remaining elements in v2
  while (j < m) {
    if (cnt == idx1) el1 = v2[j];
    if (cnt == idx2) el2 = v2[j];
    ++j;
    ++cnt;
  }
  // Check parity of total size to return the correct median
  if ((n + m) & 1) return el1;
  return (el1 + el2) / double(2);
}

// APPROACH 3: Binary search
// TC - O(log(min(n, m))), SC - O(1) 
double median(vector<int>& v1, int m, vector<int>& v2, int n) {
  if (m > n) return median(v2, n, v1, m); // Fixed recursive call
  int left = (m + n + 1) / 2;
  int low = 0, high = m;
  while (low <= high) {
    int mid1 = low + (high - low) / 2;
    int mid2 = left - mid1;
    // Using standard INT_MIN/MAX to handle all possible array values
    int l1 = (mid1 == 0) ? INT_MIN : v1[mid1 - 1];
    int l2 = (mid2 == 0) ? INT_MIN : v2[mid2 - 1];
    int r1 = (mid1 == m) ? INT_MAX : v1[mid1];
    int r2 = (mid2 == n) ? INT_MAX : v2[mid2];
    if (l1 <= r2 && l2 <= r1) {
      if ((m + n) & 1) {
        return max(l1, l2);
      }
      return (double(max(l1, l2)) + min(r1, r2)) / 2.0;
    } else if (l1 > r2) {
      high = mid1 - 1;
    } else {
      low = mid1 + 1;
    }
  }
  return 0.0;
}