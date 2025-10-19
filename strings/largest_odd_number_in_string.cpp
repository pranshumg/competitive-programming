#include <bits/stdc++.h>

using namespace std;

/* Largest odd number in a string */
// TC - O(n), SC - O(n)
string largest(string s) {
  int n = (int)s.size();
  for (int i = n - 1; i >= 0; --i) {
    if ((s[i] - '0') % 2 != 0) {
      return s.substr(0, i + 1);
    }
  }
  return "";
}