#include <bits/stdc++.h>

using namespace std;

/* Print any nth row of Pascal Triangle */
// Brute (TC - O(r²), SC - O(1))
int64_t nCr(int n, int r) {
  int64_t res = 1;
  for (int i = 0; i < r; i++) {
    res = res * (n - i);
    res = res / (i + 1);
  }
  return res;
}

void print_row(int r) {
  for (int c = 1; c <= r; c++) {
    cout << nCr(r - 1, c - 1) << ' ';
  }
}

// Optimal (TC - O(r), SC - O(1))
void print_row(int r) {
  int ans = 1;
  cout << ans << ' ';
  for (int i = 1; i < r; i++) {
    ans = ans * (r - i);
    ans = ans / i;
    cout << ans << ' ';
  }
}
