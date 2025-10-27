#include <bits/stdc++.h>

using namespace std;

/* Minimum coins */

// TC - O(n log n), SC - O(k) where k is the number of coins used
void min_coins(vector<int>& v, int amount) {
  sort(v.begin(), v.end());
  vector<int> ans;
  for (int i = (int)v.size() - 1; i >= 0; --i) {
    while (v[i] <= amount) {
      ans.emplace_back(v[i]);
      amount -= v[i];
    }
  }
  cout << (int)ans.size() << '\n';
  for (auto &it : ans) {
    cout << it << ' ';
  }
  cout << '\n';
}