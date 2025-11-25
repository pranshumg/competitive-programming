#include <bits/stdc++.h>

using namespace std;

/* Sum of subarray ranges */

// TC - O(n * n), SC - O(1)
int sum(vector<int>& v) {
  int n = (int)v.size();
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int mini = v[i], maxi = v[i];
    for (int j = i; j < n; ++j) {
      mini = min(v[j], mini);
      maxi = max(v[j], maxi);
      ans += maxi - mini;
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

int sum_max(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nge = next_greater_element(v);
  vector<int> pge = prev_greater_element(v);
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int left = i - pge[i];
    int right = nge[i] - i;
    ans += left * right * 1LL * v[i];
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

int sum_min(vector<int>& v) {
  int n = (int)v.size();
  vector<int> nse = next_smaller_element(v);
  vector<int> pse = prev_smaller_element(v);
  int ans = 0;
  for (int i = 0; i < n; ++i) {
    int left = i - pse[i];
    int right = nse[i] - i;
    ans += left * right * 1LL * v[i];
  }
  return ans;
}

// TC - O(n), SC - O(n)
int sum(vector<int>& v) {
  return sum_max(v) - sum_min(v);
}