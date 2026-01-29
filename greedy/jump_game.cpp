#include <bits/stdc++.h>

using namespace std;

/* Jump game */

// TC - O(n), SC - O(1)
bool can_jump(vector<int>& v) {
    int mx_idx = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        // If the current index i is beyond the maximum reach calculated so far,
        // we cannot reach this point (and consequently the end).
        if (mx_idx < i) {
            return false;
        }
        // Update the maximum index reachable from the current position
        mx_idx = max(mx_idx, i + v[i]);
    }
    return true;
}