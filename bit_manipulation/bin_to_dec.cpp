#include <bits/stdc++.h>

using namespace std;

/* Binary to decimal integer */

// TC - O(n), SC - O(1)
int bin_to_dec(string s) {
  int n = (int)s.size(), res = 0, p2 = 0;
  for (int i = n - 1; i >= 0; --i) {
    if (s[i] == '1') {
      res += 1 << p2;
    }
    ++p2;
  }
  return res;
}