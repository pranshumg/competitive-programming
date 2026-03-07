#include <bits/stdc++.h>

using namespace std; 

/* Single element in sorted array */

// TC - O(log n), SC - O(1)
int single(vector<int>& v, int n) {
  if (n == 1) return v[0];
  if (v[0] != v[1]) return v[0];
  if (v[n - 1] != v[n - 2]) return v[n - 1];
  int low = 1, high = n - 2;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    // Found 
    if (v[mid - 1] != v[mid] && v[mid] != v[mid + 1]) {
      return v[mid];
    }
    // Checking if we are in the left half:
    // Case 1: mid is odd and partner is at mid-1
    // Case 2: mid is even and partner is at mid+1
    if ((mid & 1 && v[mid] == v[mid - 1]) || (!(mid & 1) && v[mid] == v[mid + 1])) {
      low = mid + 1;
    } else {
      high = mid - 1; 
    }
  }
  return -1;
}