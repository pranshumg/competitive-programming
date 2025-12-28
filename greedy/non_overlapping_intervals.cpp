#include <bits/stdc++.h>

using namespace std;

/* Non overlapping intervals */

// TC - O(n log n), SC - O(1)
int intervals(vector<vector<int>>& v) {
    sort(v.begin(), v.end(), [](auto& a, auto& b) {
        return a.back() < b.back();
    });
    int cnt = 0, end = INT_MIN;
    for (auto &it : v) {
        if (it.front() >= end) {
            ++cnt;
            end = it.back();
        }
    }
    return (int)v.size() - cnt;
}