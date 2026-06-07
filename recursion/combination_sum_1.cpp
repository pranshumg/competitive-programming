#include <bits/stdc++.h>

using namespace std;

/* Combination sum 1 */
// https://leetcode.com/problems/combination-sum/

// TC - O(n^(t/m)), SC - O(t/m) where n = no. of candidates, t = target, m = minimum value in candidates
void find_combination(int idx, int n, vector<int>& v, int target, vector<int>& tmp, vector<vector<int>>& res) {
    if (target == 0) {
        res.push_back(tmp);
        return;
    }
    if (idx >= n || target < 0) return;
    tmp.push_back(v[idx]);
    find_combination(idx, n, v, target - v[idx], tmp, res);
    tmp.pop_back();
    find_combination(idx + 1, n, v, target, tmp, res);
}