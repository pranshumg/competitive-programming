#include <bits/stdc++.h>

using namespace std;

/* No. of times array has been rotated */
// TC - O(log n), SC - O(1)
int no_of_times(vector<int>& v, int n) {
  int low = 0, high = n - 1, el = INT_MAX, idx = 0;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (v[low] == v[mid] && v[mid] == v[high]) {
      if (v[low] < el) {
        el = v[low], idx = low;
      }
      low++, high--;
      continue;
    }
    if (v[low] <= v[high]) {
      if (v[low] < el) {
        el = v[low], idx = low;
      }
      break;
    }
    if (v[low] <= v[mid]) {
      if (v[low] < el) {
        el = v[low], idx = low;
      }
      low = mid + 1;
    } else {
      if (v[mid] < el) {
        el = v[mid], idx = mid; 
      }
      high = mid - 1;
    }
  }
  return idx;
}
