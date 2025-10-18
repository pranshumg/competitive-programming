#include <bits/stdc++.h>

using namespace std;

/* Reverse words in a string */
// TC - O(n), SC - O(n)
string reverse(string s) {
  int n = (int)s.size();
  string ans = "";
  for (int i = n - 1; i >= 0; --i) {
    string word = "";
    while (i >= 0 && s[i] != ' ') {
      word = s[i] + word;
      --i;
    }
    if (!word.empty()) {
      ans += " " + word;
    }
  }
  return ans.substr(1);
}