#include <bits/stdc++.h>

using namespace std;

/* Remove k digits */

// TC - O(n), SC - O(n)
string remove(string s, int k) {
  int n = (int)s.size();
  stack<char> sk;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && k > 0 && (sk.top() - '0') > (s[i] - '0')) {
      sk.pop();
      --k;
    }
    sk.push(s[i]);
  }
  while (k > 0) {
    sk.pop();
    --k;
  }
  if (sk.empty()) {
    return "0";
  }
  string res = "";
  while (!sk.empty()) {
    res += sk.top();
    sk.pop();
  }
  while ((int)res.size() > 0 && res.back() == '0') {
    res.pop_back();
  }
  if (res.empty()) {
    return "0";
  }
  reverse(res.begin(), res.end());
  return res;
}