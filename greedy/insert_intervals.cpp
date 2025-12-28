#include <bits/stdc++.h>

using namespace std;

/* Insert intervals */

// TC - O(n), SC - O(n)
vector<vector<int>> insert_intervals(vector<vector<int>>& v, vector<int>& new_interval) {
    vector<vector<int>> ans;
    int i = 0;
    while (i < (int)v.size() && v[i][1] < new_interval[0]) {
        ans.emplace_back(v[i++]);
    }
    while (i < (int)v.size() && v[i][0] <= new_interval[1]) {
        new_interval[0] = min(v[i][0], new_interval[0]);
        new_interval[1] = max(v[i++][1], new_interval[1]);
    }
    ans.emplace_back(new_interval);
    while (i < (int)v.size()) {
        ans.emplace_back(v[i++]);
    }
    return ans;
}