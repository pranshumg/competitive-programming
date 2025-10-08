#include <bits/stdc++.h>

using namespace std;

/* Best time to buy and sell stock */
// TC - O(n), SC - O(1)
int max_profit(vector<int>& v, int n) {
  int mini = v[0], profit = 0;
  for (int i = 0; i < n; i++) {
    profit = max(profit, v[i] - mini);
    mini = min(mini, v[i]);
  }
  return profit;
}