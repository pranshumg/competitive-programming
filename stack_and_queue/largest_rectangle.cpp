#include <bits/stdc++.h>

using namespace std;

/* Largest rectangle in histogram */

vector<int> next_smaller_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nse(n);
  stack<int> sk;
  for (int i = n - 1; i >= 0; --i) {
    while (!sk.empty() && v[sk.top()] >= v[i]) {
      sk.pop();
    }
    nse[i] = (sk.empty() ? n : sk.top());
    sk.push(i);
  }
  return nse;
}

vector<int> prev_smaller_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> pse(n);
  stack<int> sk;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && v[sk.top()] > v[i]) {
      sk.pop();
    }
    pse[i] = (sk.empty() ? -1 : sk.top());
    sk.push(i);
  }
  return pse;
}

// TC - O(n), SC - O(n)
int largest(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nse = next_smaller_element(v);
  vector<int> pse = prev_smaller_element(v);
  int ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    ans = max(ans, v[i] * (nse[i] - pse[i] - 1));
  }
  return ans;
}

// TC - O(n), SC - O(n)
int largest(vector<int>& v) {
  int n = (int)v.size();
  stack<int> sk;
  int ans = INT_MIN;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && v[sk.top()] > v[i]) {
      int idx = sk.top();
      sk.pop();
      int nse = i, pse = (sk.empty() ? -1 : sk.top());;
      ans = max(ans, v[idx] * (nse - pse - 1));
    } 
    sk.push(i);
  }
  while (!sk.empty()) {
    int idx = sk.top();
    sk.pop();
    int nse = n, pse = (sk.empty() ? -1 : sk.top());
    ans = max(ans, v[idx] * (nse - pse - 1));
  }
  return ans;
}