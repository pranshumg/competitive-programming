#include <bits/stdc++.h>

using namespace std;

/* Sliding window maximum */

// TC - O((n - k) * k), SC - O(n - k)
vector<int> sliding(vector<int>& v, int k) {
  vector<int> ans;
  int n = (int)v.size();
  for (int i = 0; i < n - k + 1; ++i) { 
    int maxi = v[i];
    for (int j = i + 1; j < i + k; ++j) {
      maxi = max(maxi, v[i]);
    }
    ans.emplace_back(maxi);
  }
  return ans;
}

// TC - O(n), SC - O(k)
vector<int> sliding(vector<int>& v, int k) {
  vector<int> ans;
  int n = (int)v.size();
  deque<int> dq;
  for (int i = 0; i < n; ++i) {
    if (!dq.empty() && dq.front() <= i - k) {
      dq.pop_front();
    }
    while (!dq.empty() && v[dq.back()] <= v[i]) {
      dq.pop_back();
    }
    dq.emplace_back(i);
    if (i >= k - 1) {
      ans.emplace_back(v[dq.front()]);
    }
  }
  return ans;
}