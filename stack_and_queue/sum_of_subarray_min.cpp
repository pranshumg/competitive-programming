#include <bits/stdc++.h>

using namespace std;

constexpr int MOD = 1e9 + 7;

/* Sum of subarray minimum */

// TC - O(n * n), SC - O(1)
int sum(vector<int>& v) {
  int n = (int)v.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int mini = v[i];
    for (int j = i; j < n; ++j) {
      mini = min(v[j], mini);
      ans = (ans + mini) % MOD;
    }
  }
  return ans;
}

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
int sum(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nse = next_smaller_element(v);
  vector<int> pse = prev_smaller_element(v);
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int left = i - pse[i];
    int right = nse[i] - i;
    ans = (ans + (left * right * 1LL * v[i])) % MOD;
  }
  return ans;
}