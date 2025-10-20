#include <bits/stdc++.h>

using namespace std;

/* Divide two numbers without using multiplication and division operators */

// Brute
// TC - O(dividend), SC - O(1)
int divide(int dividend, int divisor) {
  int cnt = 0, sum = 0;
  while (sum + divisor <= dividend) {
    sum += divisor;
    ++cnt;
  }
  return cnt;
}

// Optimal
// TC - (log n * log n), SC - O(1)
int divide(int dividend, int divisor) {
  if (dividend == INT_MIN && divisor == -1) {
    return INT_MAX;
  }
  if (dividend == divisor) {
    return 1;
  }
  bool sign = true;
  if ((dividend >= 0 && divisor < 0) || (dividend < 0 && divisor > 0)) {
    sign = false;
  }
  int64_t n = abs((int64_t)dividend), d = abs((int64_t)divisor), ans = 0;
  while (n >= d) {
    int cnt = 0;
    while (n >= (d << (cnt + 1))) {
      ++cnt;
    }
    ans += (1 << cnt);
    n = n - (d << cnt);
  }
  if (ans > INT_MAX) {
    if (!sign) {
      return INT_MIN;
    }
    return INT_MAX;
  }
  if (!sign) {
    ans = -ans;
  }
  return ans;
}