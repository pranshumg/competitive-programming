#include <bits/stdc++.h>

using namespace std;

/* Upper Bound: Finds the first index `i` such that v[i] > target.
   TC - O(log n), SC - O(1)
*/
int upper_bound(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int m = l + ((h - l) >> 1);
        if (v[m] > target) {
            // This is a candidate for Upper Bound, but check 
            // if there's an even smaller index to the left.
            h = m - 1;
        } else {
            // If v[mid] <= target, the upper bound must be further right.
            l = m + 1;
        }
    }
    // 'l' will naturally settle at the first index where v[i] > target.
    return l;
}