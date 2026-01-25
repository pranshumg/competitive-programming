#include <bits/stdc++.h>

using namespace std;

/* Count subarray sum equal k */

// Brute 
// TC - O(n * n * n), SC - O(1)
int subarray_sum(vector<int>& v, int n, int k) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = 0;
            for (int l = i; l <= j; ++l) {
                sum += v[l];
            }
            if (sum == k) {
                ++cnt;
            }
        }
    }
    return cnt;
}

// Better 
// TC - O(n * n), SC - O(1)
int subarray_sum(vector<int>& v, int n, int k) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = i; j < n; ++j) {
            sum += v[j];
            if (sum == k) {
                ++cnt;
            }
        }
    }
    return cnt;
}

// Optimal 
// TC - O(n), SC - O(n)
int subarray_sum(vector<int>& v, int n, int k) {
    int cnt = 0, sum = 0;
    map<int, int> pre;
    ++pre[0];
    for (int i = 0; i < n; ++i) {
        sum += v[i];
        cnt += pre[sum - k];
        ++pre[sum];
    }
    return cnt;
}