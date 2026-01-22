#include <bits/stdc++.h>

using namespace std;

/* Longest subarray with sum k */

// Brute 
// TC - O(n * n), SC - O(1)
int longest_subarray(vector<int>& v, int n, int k) {
    int len = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += v[j];
            if (sum == k) {
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

// Better
// TC - O(n), SC - O(n)
// Works for both positive and negative numbers
int longest_subarray(vector<int>& v, int n, int k) {
    map<int, int> pre;
    int len = 0, sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        if (sum == k) {
            len = max(len, i + 1);
        }
        if (pre.find(sum - k) != pre.end()) {
            len = max(len, i - pre[sum - k]);
        }
        if (pre.find(sum) == pre.end()) {
            pre[sum] = i;
        }
    }
    return len;
}

// Optimal 
// TC - O(n), SC - O(1)
// NOTE: This approach ONLY works if the array contains non-negative integers.
// If the array contains negative numbers, you must use the hashing approach above.
int longest_subarray(vector<int>& v, int n, int k) {
    int l = 0, r = 0, len = 0, sum = 0;
    while (r < n) {
        sum += v[r];
        while (l <= r && sum > k) {
            sum -= v[l++];
        }
        if (sum == k) {
            len = max(len, r - l + 1);
        }
        ++r;
    }
    return len;
}