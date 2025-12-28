#include <bits/stdc++.h>

using namespace std;

/* Jump game 2 */

int solve(vector<int>& v, int idx, int jumps) {
    if (idx >= (int)v.size()) {
        return jumps;
    }
    int mn = INT_MAX;
    for (int i = 1; i <= v[idx]; ++i) {
        mn = min(mn, solve(v, idx + i, jumps + 1));
    }
    return mn;
}

// TC - O(n ^ n), SC - O(n)
int jump(vector<int>& v) {
    return solve(v, 0, 0);
}

// TC - O(n), SC - O(1)
int jump(vector<int>& v) {
    int jumps = 0;
    int l = 0, r = 0;
    while (r < (int)v.size() - 1) {
        int farthest = 0;
        for (int i = l; i <= r; ++i) {
            farthest = max(farthest, i + v[i]);
        }
        l = r + 1, r = farthest;
        ++jumps;
    }
    return jumps;
}