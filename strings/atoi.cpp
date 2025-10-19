#include <bits/stdc++.h>

using namespace std;

/* String to integer (atoi) */

// TC - O(n), SC - O(1)
int atoi(string s) {
  int64_t ans = -1;
  int sign = 0, n = (int)s.size();
  for (int i = 0; i < n; ++i) {
    while (i < n && s[i] == ' ' && sign == 0 && ans == -1) {
      ++i;
    }
    if (s[i] == '-') {
      if (sign == 0 && ans == -1) {
        sign = -1;
        continue;
      } else {
        break;
      }
    }
    if (s[i] == '+') {
      if (sign == 0 && ans == -1) {
        sign = 2;
        continue;
      } else {
        break;
      }
    }
    if (isdigit(s[i])) {
      if (ans == -1) {
        ans = 0;
      }
      ans = ans * 10 + (s[i] - '0');
      if (ans > INT_MAX) {
        if (sign == -1) {
          return INT_MIN;
        }
        return INT_MAX;
      }
    } else {
      break;
    }
  }
  if (ans == -1) {
    ans = 0;
  }
  if (sign == -1) {
    ans = -ans;
  }
  return ans;
}