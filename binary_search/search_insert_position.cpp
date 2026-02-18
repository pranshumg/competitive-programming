#include <bits/stdc++.h>

using namespace std;

/* Search Insert Position: Finds the index where 'target' is or should be.
   TC - O(log n), SC - O(1)
*/
int search_insert_position(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        // Optimized midpoint to prevent overflow
        int m = l + ((h - l) >> 1);
        if (v[m] >= target) {
            // This is either the target or where the target would go.
            // Move left to see if there's an even earlier valid position.
            h = m - 1;
        } else {
            // Too small, must look to the right.
            l = m + 1;
        }
    }
    // 'l' points to the correct insertion index.
    return l;
}