#include <bits/stdc++.h>

using namespace std;

/* Combination sum 3 */
// https://leetcode.com/problems/combination-sum-iii/

// TC - O(C(9, k)), SC - O(k) where k is maximum depth
void find_combination(int cur, int mx, int n, int k, vector<int>& tmp, vector<vector<int>>& res) {
    if (k == 0) {
        if (n == 0) {
            res.push_back(tmp);
        }
        return;
    }
    if (cur > mx || n <= 0) return;
    tmp.push_back(cur);
    find_combination(cur + 1, mx, n - cur, k - 1, tmp, res);
    tmp.pop_back();
    find_combination(cur + 1, mx, n, k, tmp, res);
}