#include <bits/stdc++.h>

using namespace std;

/* Power exponentiation */

// TC - O(log n), SC - O(1)
double pow(double x, int n) {
  double ans = 1;
  int64_t m = abs((int64_t)n);
  while (m > 0) {
    if (m & 1) {
      ans *= x, --m;
    } else {
      x *= x, m >>= 1;
    }
  }
  if (n < 0) {
    ans = 1.0 / ans;
  }
  return ans;
}