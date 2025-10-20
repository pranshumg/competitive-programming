#include <bits/stdc++.h>

using namespace std;

/* Decimal integer to binary */

// TC - O(log n), SC - O(log n)
string dec_to_bin(int n) {
  string b = "";
  while (n > 0) {
    int d = n % 2;
    b += '0' + d;
    n /= 2;
  }
  reverse(b.begin(), b.end());
  return b;
}