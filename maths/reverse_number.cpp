#include <bits/stdc++.h>

using namespace std;

/* Reverse number */
// TC - O(log n)
int reverse(int n) {
  int rev_n = 0;
  while (n > 0) {
    int d = n % 10;
    rev_n = rev_n * 10 + d;
    n /= 10;
  }
  return rev_n;
}
