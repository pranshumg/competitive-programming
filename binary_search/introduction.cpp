#include <bits/stdc++.h>

using namespace std;

/* Binary search */

// Iterative 
// TC - O(log n), SC - O(1)
int binary_search(vector<int>& v, int n, int target) {
    int l = 0, h = n - 1;
    while (l <= h) {
        // Use this to prevent potential overflow instead of (l + h) >> 1
        int m = l + ((h - l) >> 1);
        if (v[m] == target) {
            return m;
        } else if (v[m] > target) {
            h = m - 1;
        } else {
            l = m + 1;
        }
    }
    return -1;
}

// Recursive 
// TC - O(log n), SC - O(log n) due to recursion stack
int binary_search(vector<int>& v, int target, int l, int h) {
    if (l > h) {
        return -1;
    }
    int m = l + ((h - l) >> 1);
    if (v[m] == target) {
        return m;
    } else if (v[m] > target) {
        return binary_search(v, target, l, m - 1);
    } else {
        return binary_search(v, target, m + 1, h);
    }
}