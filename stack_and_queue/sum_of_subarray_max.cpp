#include <bits/stdc++.h>

using namespace std;

constexpr int MOD = 1e9 + 7;

/* Sum of subarray maximum */

// TC - O(n * n), SC - O(1)
int sum(vector<int>& v) {
  int n = (int)v.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int maxi = v[i];
    for (int j = i; j < n; ++j) {
      maxi = max(v[i], maxi);
      ans = (ans + maxi) % MOD;
    }
  }
  return ans;
}

vector<int> next_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge(n);
  stack<int> sk;
  for (int i = n - 1; i >= 0; --i) {
    while (!sk.empty() && v[sk.top()] <= v[i]) {
      sk.pop();
    }
    nge[i] = (sk.empty() ? n : sk.top());
    sk.push(i);
  }
  return nge;
}

vector<int> prev_greater_element(vector<int>& v) {
  int n = (int)v.size();
  vector<int> pge(n);
  stack<int> sk;
  for (int i = 0; i < n; ++i) {
    while (!sk.empty() && v[sk.top()] < v[i]) {
      sk.pop();
    }
    pge[i] = (sk.empty() ? -1 : sk.top());
    sk.push(i);
  }
  return pge;
}

// TC - O(n), SC - O(n)
int sum(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge = next_greater_element(v);
  vector<int> pge = prev_greater_element(v);
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int left = i - pge[i];
    int right = nge[i] - i;
    ans = (ans + (left * right * 1LL * v[i])) % MOD;
  }
  return ans;
}