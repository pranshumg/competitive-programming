#include <bits/stdc++.h>

using namespace std;

/* Majority element */
// Brute (TC - O(n²), SC - O(1))
int majority_element(vector<int>& v, int n) {
    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (v[i] == v[j]) {
                cnt++;
            }
        }
        if (cnt > n / 2) {
            return v[i];
        }
    }
}

// Better (TC - O(n), SC - O(n))
int majority_element(vector<int>& v, int n) {
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[v[i]]++;
    }
    for (auto it: mp) {
        if (it.second > n / 2) {
            return it.first;
        }
    }
    return -1;
}

// Moore's Voting Algorithm (Optimal)
// (TC - O(n), SC - O(1))
int majority_element(vector<int>& v, int n) {
    int cnt = 0, el;
    for (int i = 0; i < n; i++) {
        if (cnt == 0) {
            el = v[i];
            cnt++;
        } else if (v[i] == el) {
            cnt++;
        } else {
            cnt--;
        }
    }
    cnt = 0;
    for (int i = 0; i < n; i++) {
        if (v[i] == el) {
            cnt++;
        }
    }
    return (cnt > n / 2) ? el : -1;
}
