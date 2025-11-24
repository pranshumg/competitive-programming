#include <bits/stdc++.h>

using namespace std;

/* Next greater element 1 */

// TC - O(n * n), SC - O(n)
vector<int> next_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge(n);
  for (int i = 0; i < n; ++i) {
    bool flag = false;
    for (int j = i + 1; j < n; ++j) {
      if (v[j] > v[i]) {
        nge[i] = v[j];
        flag = true;
        break;
      }
    }
    if (!flag) {
      nge[i] = -1;
    }
  }
  return nge;
}

// TC - O(n), SC - O(n)
vector<int> next_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge(n);
  stack<int> sk;
  for (int i = n - 1; i >= 0; --i) {
    while (!sk.empty() && sk.top() <= v[i]) {
      sk.pop();
    }
    if (sk.empty()) {
      nge[i] = -1;
    } else {
      nge[i] = sk.top();
    }
    sk.push(v[i]);
  }
  return nge;
}