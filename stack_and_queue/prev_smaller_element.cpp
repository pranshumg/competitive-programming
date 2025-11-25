#include <bits/stdc++.h>

using namespace std;

/* Previous smaller element */

// TC - O(n * n), SC - O(n)
vector<int> prev_smaller_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> pse(n);
  for (int i = 0; i < n; ++i) {
    bool flag = false;
    for (int j = i - 1; j >= 0; --j) {
      if (v[j] < v[i]) {
        pse[i] = v[j];
        flag = true;
        break;
      }
    }
    if (!flag) {
      pse[i] = -1;
    }
  }
  return pse;
}

// TC - O(n), SC - O(n)
vector<int> prev_smaller_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> pse(n);
  stack<int> sk;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && sk.top() >= v[i]) {
      sk.pop();
    }
    if (sk.empty()) {
      pse[i] = -1;
    } else {
      pse[i] = sk.top();
    }
    sk.push(v[i]);
  }
  return pse;
}