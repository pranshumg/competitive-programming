#include <bits/stdc++.h>

using namespace std;

/* Anagram */
// TC - O(n), SC - O(1)
bool is_anagram(string s, string t) {
  if ((int)s.size() != (int)t.size()) {
    return false;
  }
  vector<int> freq(26, 0);
  for (char c : s) {
    ++freq[c - 'a'];
  }
  for (char c : t) {
    if (--freq[c - 'a'] < 0) {
      return false;
    }
  }
  return true;
} 