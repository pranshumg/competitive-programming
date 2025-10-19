#include <bits/stdc++.h>

using namespace std;

/* Roman number to integer */

// TC - O(n), SC - O(1)
int roman_to_int(string s) {
  map<char, int> mp = {
    {'I', 1},
    {'V', 5},
    {'X', 10},
    {'L', 50},
    {'C', 100},
    {'D', 500},
    {'M', 1000}
  };
  int ans = 0;
  for (int i = 0; i < (int)s.size(); ++i) {
    if (i > 0 && mp[s[i]] > mp[s[i - 1]]) {
      ans += mp[s[i]] - 2 * mp[s[i - 1]];
    } else {
      ans += mp[s[i]];
    }
  }
  return ans;
}