#include <bits/stdc++.h>

using namespace std;

/* Job sequencing */

struct Jobs {
    int id, profit, deadline;
};

// TC - O(n log n), SC - O(n)
int profit(vector<Jobs>& v) {
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a.profit > b.profit;
    });
    int mx_deadline = 0;
    for (auto &it : v) {
        mx_deadline = max(mx_deadline, it.deadline);
    }
    vector<int> hash(mx_deadline + 1, -1);
    int cnt = 0, mx_profit = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        for (int j = v[i].deadline; j > 0; --j) {
            if (hash[j] == -1) {
                ++cnt;
                mx_profit += v[i].profit;
                hash[j] = v[i].id;
                break;
            }
        }
    }
    return mx_profit;
}