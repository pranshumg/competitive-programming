#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& v) {
        int profit = 0, mini = v[0];
        for (int i = 1; i < (int)v.size(); i++) {
            profit = max(profit, v[i] - mini);
            mini = min(mini, v[i]);
        }
        return profit;
    }
};