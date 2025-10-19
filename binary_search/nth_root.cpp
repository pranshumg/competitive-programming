#include <bits/stdc++.h>

using namespace std;

/* Nth root of an integer */
// return 0 if == m
// return 1 if < m
// return 2 if > m
int mul(int mid, int n, int m) {
  int ans = 1;
  for (int i = 1; i <= n; i++) {
    ans *= mid;
    if (ans > m) {
      return 2;
    }
  }
  if (ans < m) {
    return 1;
  }
  return 0;
}

int root(int n, int m) {
  int low = 1, high = m;
  while (low <= high) {
    int mid = (low + high) / 2;
    int midN = mul(mid, n, m);
    if (midN == 0) {
      return mid;
    } else if (midN == 2) {
      high = mid - 1;
    } else {
      low = mid + 1;
    }
  }
  return -1;
}
