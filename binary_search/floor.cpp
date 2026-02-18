#include <bits/stdc++.h>

using namespace std;

/* Floor: Finds the largest index `i` such that v[i] <= target.
   TC - O(log n), SC - O(1)
*/
int floor(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        int m = l + ((h - l) >> 1);
        if (v[m] <= target) {
            // v[m] is a valid candidate for floor, 
            // so we look to the right to see if a larger valid index exists.
            l = m + 1;
        } else {
            // v[m] is too large, move the search left.
            h = m - 1;
        }
    }
    // After the loop, 'h' will be the largest index such that v[h] <= target.
    // If no such element exists, 'h' will naturally become -1.
    return h;
}