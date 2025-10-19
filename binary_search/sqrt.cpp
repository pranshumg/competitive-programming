#include <bits/stdc++.h>

using namespace std;

/* Sqrt of a number */
// TC - O(log n), SC - O(1)
int sqrt(int n) {
  int low = 1, high = n, ans = 1;
  while (low <= high) {
    int mid = (low + high) / 2;
    if (mid * mid <= n) {
      ans = mid, low = mid + 1;
    } else {
      high = mid - 1;
    }
  }
  return ans;
}
