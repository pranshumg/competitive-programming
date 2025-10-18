#include <bits/stdc++.h>

using namespace std;

/* Isomorphic strings */
// TC - O(n), SC - O(1)
bool is_isomorphic(string s, string t) {
  if ((int)s.size() != (int)t.size()) {
    return false;
  }
  map<char, char> mp1, mp2;
  for (int i = 0; i < (int)s.size(); ++i) {
    if ((mp1.find(s[i]) != mp1.end() && mp1[s[i]] != t[i]) || ((mp2.find(t[i]) != mp2.end() && mp2[t[i]] != s[i]))) {
      return false;
    }
    mp1[s[i]] = t[i];
    mp2[t[i]] = s[i];
  }
  return true;
}