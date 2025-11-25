#include <bits/stdc++.h>

using namespace std;

/* Next greater element 2 */

// TC - O(n * n), SC - O(n)
vector<int> next_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge(n);
  for (int i = 0; i < n; ++i) {
    bool flag = false;
    for (int j = i + 1; j < n; ++j) {
      if (v[j] > v[i]) {
        nge[j] = v[i];
        flag = true;
        break;
      }
    }
    if (!flag) {
      for (int j = 0; j < i; ++j) {
        if (v[j] > v[i]) {
          nge[i] = v[j];
          flag = true;
          break;
        }
      }
    }
    if (!flag) {
      nge[i] = -1;
    }
  }
  return nge;
}

// TC - O(n * n), SC - O(n)
vector<int> next_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge(n);
  for (int i = 0; i < n; ++i) {
    bool flag = false;
    for (int j = i + 1; j < i + n; ++j) {
      if (v[j % n] > v[i]) {
        nge[j % n] = v[i];
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
  for (int i = 2 * n - 1; i >= 0; --i) {
    while (!sk.empty() && sk.top() <= v[i % n]) {
      sk.pop();
    }
    if (i < n) {
      nge[i] = (sk.empty() ? -1 : sk.top());
    }
    sk.push(v[i % n]);
  }
  return nge;
}