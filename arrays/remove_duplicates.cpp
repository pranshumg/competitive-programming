#include <bits/stdc++.h>

using namespace std;

/* Remove Duplicates from sorted array */

// (TC - O(n log n), SC - O(n))
int remove_duplicates(vector<int>& v, int n) {
    set<int> st;
    for (int i = 0; i < n; ++i) {
        st.insert(v[i]);
    }
    int idx = 0;
    for (auto it : st) {
        v[idx++] = it;
    }
    return (int)st.size();
}

// Optimal (TC - O(n), SC - O(1))
int remove_duplicates_optimal(vector<int>& v, int n) {
    int i = 0, j = 1;
    while (j < n) {
        if (v[i] != v[j]) {
            v[i++ + 1] = v[j];
        }
        j++;
    }
    return i + 1;
}