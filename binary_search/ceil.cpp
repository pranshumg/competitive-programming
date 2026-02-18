#include <bits/stdc++.h>

using namespace std;

/* Ceil: Finds the smallest index `i` such that v[i] >= target.
   TC - O(log n), SC - O(1)
*/
int ceil(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int m = l + ((h - l) >> 1);   
        if (v[m] >= target) {
            // Potential ceiling found, but check for a smaller index to the left
            h = m - 1;
        } else {
            // v[m] is strictly less than target, ceiling must be to the right
            l = m + 1;
        }
    }   
    // 'l' will point to the first index where v[i] >= target.
    // Note: If target > v[n-1], 'l' will be equal to 'n'.
    return l;
}