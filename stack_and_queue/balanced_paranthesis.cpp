#include <bits/stdc++.h>

using namespace std;

/* Check for balanced paranthesis */

// TC - O(n), SC - O(n)
bool is_valid(string s) {
  stack<char> sk;
  for (auto &it : s) {
    if (it == '(' || it == '{' || it == '[') {
      sk.push(it);
    } else {
      if (sk.empty()) {
        return false;
      }
      char c = sk.top();
      sk.pop();
      if ((it == ')' && c != '(') || (it == '}' && c != '{') || (it == ']' && c != '[')) {
        return false;
      } 
    }
  }
  return sk.empty();
}