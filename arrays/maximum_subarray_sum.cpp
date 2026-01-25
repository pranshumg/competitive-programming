#include <bits/stdc++.h>

using namespace std;

/* Maximum subarray sum */

// Brute 
// TC - O(n * n * n), SC - O(1)
int max_subarray_sum(vector<int>& v, int n) {
    int ans = INT_MIN;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += v[k];
            }
            ans = max(ans, sum);
        }
    }
    return ans;
}

// Better Approach
// TC - O(n * n), SC - O(1)
int max_subarray_sum(vector<int>& v, int n) {
    int ans = INT_MIN;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += v[j];
            ans = max(ans, sum);
        }
    }
    return ans;
}

// Kadane's Algorithm (Optimal)
// TC - O(n), SC - O(1)
int max_subarray_sum(vector<int>& v, int n) {
    // Handling the case where n is 0 if necessary, though problem constraints usually imply n >= 1
    if (n == 0) {
        return 0;
    }
    int ans = v[0], sum = v[0], l = 0;
    // Variables to store the actual subarray indices if needed
    int ans_l = 0, ans_h = 0; 
    for (int i = 1; i < n; ++i) {
        // If adding the current number to previous sum is worse than 
        // starting fresh at current number (i.e., previous sum was negative)
        if (sum + v[i] < v[i]) {
            sum = v[i], l = i;
        } else {
            sum += v[i];
        }
        if (sum > ans) {
            ans = sum, ans_l = l, ans_h = i;
        }
    }  
    // If you need to print the subarray, you can use v[ans_low]...v[ans_high]
    return ans;
}