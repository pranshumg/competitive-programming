#include <bits/stdc++.h>

using namespace std;

/* Lower Bound: Finds the first index `i` such that v[i] >= target.
   If no such element exists, it returns `n`.
   TC - O(log n), SC - O(1)
*/
int lower_bound(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int m = l + ((h - l) >> 1);
        if (v[m] >= target) {
            h = m - 1;
        } else {
            l = m + 1;  
        }
    }
    return l;
}