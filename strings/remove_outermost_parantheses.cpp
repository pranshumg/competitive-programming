#include <bits/stdc++.h>

using namespace std;

/* Remove outermost parantheses */

// TC - O(n), SC - O(n)
string remove(string s) {
  string ans = "";
  stack<char> sk;
  for (char c: s) {
    if (c == '(') {
      if (!sk.empty()) {
        ans += c;
      }
      sk.push(c);
    } else {
      sk.pop();
      if (!sk.empty()) {
        ans += c;
      }
    }
  }
  return ans;
}

// TC - O(n), SC - O(1)
string remove(string s) {
  int cnt = 0;
  string ans = "";
  for (char c: s) {
    if (c == '(') {
      cnt++;
      if (cnt > 1) {
        ans += c;
      }
    } else {
      cnt--;
      if (cnt > 0) {
        ans += c;
      }
    }
  }
  return ans;
}