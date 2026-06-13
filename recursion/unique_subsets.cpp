#include <bits/stdc++.h>

using namespace std;

/* Unique subsets */
// https://leetcode.com/problems/subsets-ii/

void find_subset(int idx, int n, vector<int>& v, vector<int>& tmp, vector<vector<int>>& res) {
    res.push_back(tmp);
    for (int i = idx; i < n; i++) {
        if (i > idx && v[i] == v[i - 1]) {
            continue;
        }
        tmp.push_back(v[i]);
        find_subset(i + 1, n, v, tmp, res);
        tmp.pop_back();
    }
}

// TC - O(2^n), SC - O(n)
vector<vector<int>> subsets(vector<int>& v, int n) {
    sort(v.begin(), v.end());
    vector<int> tmp;
    vector<vector<int>> res;
    find_subset(0, n, v, tmp, res);
    return res;
}