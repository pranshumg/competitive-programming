#include <bits/stdc++.h>

using namespace std;

/* Majority element */

// Brute 
// TC - O(n * n), SC - O(1)
int majority_element(vector<int>& v, int n) {
    for (int i = 0; i < n; ++i) {
        int cnt = 0;
        for (int j = 0; j < n; ++j) {
            if (v[i] == v[j]) {
                ++cnt;
            }
        }
        if (cnt > n / 2) {
            return v[i];
        }
    }
    return -1;
}

// Better Approach (using Hashing)
// TC - O(n), SC - O(n)
int majority_element(vector<int>& v, int n) {
    map<int, int> mp;
    for (auto &it : v) {
        ++mp[it];
    }
    for (auto &it : mp) {
        if (it.second > n / 2) {
            return it.first;
        }
    }
    return -1;
}

// Moore's Voting Algorithm (Optimal)
// TC - O(n), SC - O(1)
int majority_element(vector<int>& v, int n) {
    int cnt = 0, el = 0;
    for (int i = 0; i < n; ++i) {
        if (cnt == 0) {
            el = v[i], cnt = 1;
        } else if (v[i] == el) {
            ++cnt;
        } else {
            --cnt;
        }
    }
    // Note: If the majority element is NOT guaranteed to exist, 
    // you must verify 'el' by counting its frequency here.
    return el; 
}