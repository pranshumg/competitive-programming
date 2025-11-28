#include <bits/stdc++.h>

using namespace std;

/* Stock span */

// TC - O(n), SC - O(n)
class stock_spanner {
public:
  vector<int> v;
  int idx;

  stock_spanner() {
    
  }

  int next(int price) {
    int cnt = 1;
    for (int i = (int)v.size() - 2; i >= 0; --i) {
      if (v[i] <= price) {
        ++cnt;
      } else {
        break;
      }
    }
    v.emplace_back(price);
    return cnt;
  }
};

// TC - O(n), SC - O(n)
class stock_spanner {
public:
  stack<pair<int, int>> sk;
  int idx;

  stock_spanner() {
    idx = -1;
  }

  int next(int price) {
    ++idx;
    while (!sk.empty() && sk.top().first <= price) {
      sk.pop();
    }
    int ans = idx - (sk.empty() ? -1 : sk.top().second);
    sk.emplace(price, idx);
    return ans;
  }
};