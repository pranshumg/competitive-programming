#include <bits/stdc++.h>

using namespace std;

/* Leaders in an array */

// Brute 
// TC - O(n * n), SC - O(n) (for storing the result)
vector<int> leaders(vector<int>& v, int n) {
    vector<int> res;
    for (int i = 0; i < n; ++i) {
        bool is_leader = true;      
        // Check all elements to the right
        for (int j = i + 1; j < n; ++j) {
            if (v[j] > v[i]) {
                is_leader = false;
                break;
            }
        }
        if (is_leader) {
            res.emplace_back(v[i]);
        }
    }
    return res;
}

// Optimal Approach
// TC - O(n), SC - O(n) (for storing the result)
vector<int> leaders(vector<int>& v, int n) {
    vector<int> res;
    int mx = INT_MIN;
    // Iterate from right to left
    for (int i = n - 1; i >= 0; --i) {
        if (v[i] > mx) {
            res.emplace_back(v[i]);
            mx = v[i];
        }
    }
    // The result is currently in reverse order (rightmost leader first)
    reverse(res.begin(), res.end());
    return res;
}