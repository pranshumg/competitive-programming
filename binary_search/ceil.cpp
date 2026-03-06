#include <bits/stdc++.h>

using namespace std;

/* Ceil: Finds the smallest index `i` such that v[i] >= target.
   TC - O(log n), SC - O(1)
*/
int ceil(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;   
    if (v[mid] >= target) {
      // Potential ceiling found, but check for a smaller index to the left
      high = mid - 1;
    } else {
      // v[mid] is strictly less than target, ceiling must be to the right
      low = mid + 1;
    }
  }   
  // 'low' will point to the first index where v[i] >= target.
  // Note: If target > v[n-1], 'low' will be equal to 'n'.
  return low;
}