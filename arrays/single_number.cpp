#include <bits/stdc++.h>

using namespace std;

/* Single number */

// Brute 
// TC - O(n * n), SC - O(1)
int single_number(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (v[i] == v[j]) {
                ++cnt;
            }
        }
        if (cnt == 1) {
            return v[i];
        }
    }
    return -1; // in case no single number exists
}

// Better Approach using Hash Map 
// TC - O(n), SC - O(n)
int single_number(vector<int>& v, int n) {
    map<int, int> mp;
    for (auto &it : v) {
        ++mp[it];
    }
    for (auto &it : mp) {
        if (it.second == 1) {
            return it.first;
        }
    }
    return -1;
}

// Optimal Approach using XOR 
// TC - O(n), SC - O(1)
int single_number(vector<int>& v, int n) {
    int ans = 0;
    for (auto &it : v) {
        ans ^= it;
    }
    return ans;
}