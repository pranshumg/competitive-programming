#include <bits/stdc++.h>

using namespace std;

/* Best time to buy and sell stock */

// TC - O(n), SC - O(1)
int max_profit(vector<int>& v, int n) {
    int mn = v[0], profit = 0;
    for (int i = 0; i < n; ++i) {
        // Calculate the profit if we sell at current price v[i]
        // using the minimum price found so far
        int cost = v[i] - mn;
        // Update max profit if current cost is higher
        profit = max(profit, cost);
        // Update minimum price seen so far
        mn = min(mn, v[i]);
    }
    return profit;
}