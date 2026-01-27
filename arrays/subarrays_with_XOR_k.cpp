#include <bits/stdc++.h>

using namespace std;

/* Subarrays with XOR target */

// Brute TC - O(n * n * n), SC - O(1)
int subarrays(vector<int>& v, int n, int target) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int XOR = 0;
            for (int k = i; k <= j; ++k) {
                XOR ^= v[k];
            }
            if (XOR == target) {
                ++cnt;
            }
        }
    }
    return cnt;
}

// Better 
// TC - O(n * n), SC - O(1)
int subarrays(vector<int>& v, int n, int target) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        int XOR = 0;
        for (int j = i; j < n; ++j) {
            XOR ^= v[j];
            if (XOR == target) {
                ++cnt;
            }
        }
    }
    return cnt;
}

// Optimal 
// TC - O(n), SC - O(n)
int subarrays(vector<int>& v, int n, int target) {
    int cnt = 0, XOR = 0;
    map<int, int> mp;
    // Initial prefix XOR 0 with count 1
    mp[0] = 1; 
    for (int i = 0; i < n; ++i) {
        XOR ^= v[i];
        // Check if there exists a prefix such that XOR ^ prefix = target
        // which implies prefix = XOR ^ target
        int x = XOR ^ target;
        // Note: mp[x] creates a new entry with value 0 if x doesn't exist, 
        // effectively adding 0 to cnt. This is safe logic-wise.
        cnt += mp[x];
        ++mp[XOR];
    }
    return cnt;
}