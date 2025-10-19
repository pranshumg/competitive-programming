#include <bits/stdc++.h>

using namespace std;

/* Maximum nesting depth of parenthesis */

// TC - O(n), SC - O(1)
int max_depth(string s) {
  int cnt = 0, ans = 0;
  for (auto it: s) {
    if (it == '(') {
      ++cnt;
    } else if (it == ')') {
      --cnt;
    }
    ans = max(ans, cnt);
  }
  return ans;
}