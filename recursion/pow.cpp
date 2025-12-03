#include <bits/stdc++.h>

using namespace std;

/* Pow(x, n) */

// iterative
// TC - O(log n), SC - O(1)
double pow(double x, long long n) {
  double ans = 1.0;
  if (n < 0) {
    n = -1 * n;
  }
  while (n) {
    if (n & 1) {
      ans *= x;
      n -= 1;
    } else {
      x *= x;
      n >>= 1;
    }
  }
  if (n < 0) {
    ans = double(1.0) / double(ans);
  }
  return ans;
}

double result(double x, long long n) {
  if (n == 0) {
    return 1.0;
  }
  if (n & 1) {
    return x * result(x, n - 1);
  }
  return result(x * x, n / 2);
}

// recursive
// TC - O(log n), SC - O(log n)
double pow(double x, int n) {
  long long N = n;
  if (n < 0) {
    return (1.0 / result(x, N));
  }
  return result(x, N);
}