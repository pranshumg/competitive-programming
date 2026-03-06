#include <bits/stdc++.h>

using namespace std;

/* Floor: Finds the largest index `i` such that v[i] <= target.
   TC - O(log n), SC - O(1)
*/
int floor(vector<int>& v, int n, int target) {
  int low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;
    if (v[mid] <= target) {
      // v[mid] is a valid candidate for floor, 
      // so we look to the right to see if a larger valid index exists.
      low = mid + 1;
    } else {
      // v[mid] is too large, move the search left.
      high = mid - 1;
    }
  }
  // After the loop, 'high' will be the largest index such that v[high] <= target.
  // If no such element exists, 'high' will naturally become -1.
  return high;
}