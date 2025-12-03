#include <bits/stdc++.h>

using namespace std;

/* Pow(x, n) */

// iterative
// TC - O(log n), SC - O(1)
double pow(double x, int n) {
  double ans = 1.0;
  long long N = n;
  if (n < 0) {
    N = (long long)-1 * n;
  }
  while (N) {
    if (N & 1) {
      ans *= x;
      N -= 1;
    } else {
      x *= x;
      N >>= 1;
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