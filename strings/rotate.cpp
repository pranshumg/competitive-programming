#include <bits/stdc++.h>

using namespace std;

/* Check whether one string is rotation of another */

// TC - O(n * n), SC - O(1)
bool rotate_string(string s, string t) {
  int n = (int)s.size();
  int m = (int)t.size();
  if (n != m) {
    return false;
  }
  for (int i = 0; i < n; ++i) {
    if (s == t) {
      return true;
    }
    rotate(s.begin(), s.end() - 1, s.end());
  }
  return false;
}

// TC - O(n), SC - O(1)
bool rotate_string(string s, string t) {
  if ((int)s.size() != (int)t.size()) {
    return false;
  }
  s = s + s;
  return s.find(t) != string::npos;
}