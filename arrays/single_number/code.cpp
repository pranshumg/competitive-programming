#include <bits/stdc++.h>

using namespace std;

/* Number that appears once, and the others twice */
// Brute (TC - O(n²), SC - O(1))
int single_number(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j]) {
                cnt++;
            }
        }
        if (cnt == 1) {
            return v[i];
        }
    }
}

// Better (TC - O(n), SC - O(n))
int single_number(vector<int>& v, int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }
    for (auto it: mp) {
        if (it.second == 1) {
            return it.first;
        }
    }
}

// Optimal (TC - O(n), SC - O(1))
int single_number(vector<int>& v, int n) {
    int XOR = 0;
    for (int i = 0; i < n; i++) {
        XOR ^= v[i];
    }
    return XOR;
}