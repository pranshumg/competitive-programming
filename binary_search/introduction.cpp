#include <bits/stdc++.h>

using namespace std;

/* Binary search */

// Iterative (TC - O(log n), SC - O(1))
int binary_search(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[mid] == target) {
      return mid;
    } else if (v[mid] > target) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}

// Recursive (TC - O(log n), SC - O(log n))
int binary_search(vector<int>& v, int target, int low, int high) {
  if (low > high) {
    return -1;
  }
  int mid = (low + high) / 2;
  if (v[mid] == target) {
    return mid;
  } else if (v[mid] > target) {
    return binary_search(v, target, low, mid - 1);
  } else {
    return binary_search(v, target, mid + 1, high);
  }
}
