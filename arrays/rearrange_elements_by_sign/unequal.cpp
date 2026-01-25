#include <bits/stdc++.h>

using namespace std;

/* Rearrange unequal positive and negative elements by sign */

// TC - O(n), SC - O(n)
vector<int> rearrange_array(vector<int>& v, int n) {
    vector<int> pos, neg;
    // Separate positive and negative elements
    for (int i = 0; i < n; ++i) {
        if (v[i] > 0) {
            pos.emplace_back(v[i]);
        } else {
            neg.emplace_back(v[i]);
        }
    }
    vector<int> res(n);
    // If positives are more than negatives
    if ((int)pos.size() > (int)neg.size()) {
        // Fill alternating positions up to the size of the smaller list (neg)
        for (int i = 0; i < (int)neg.size(); ++i) {
            res[2 * i] = pos[i];
            res[2 * i + 1] = neg[i];
        }
        // Append remaining positives
        int idx = (int)neg.size() * 2;
        for (int i = (int)neg.size(); i < (int)pos.size(); ++i) {
            res[idx++] = pos[i];
        }
    } 
    // If negatives are more than positives (or equal, though equal is usually handled by the simpler logic)
    else {
        // Fill alternating positions up to the size of the smaller list (pos)
        for (int i = 0; i < (int)pos.size(); ++i) {
            res[2 * i] = pos[i];
            res[2 * i + 1] = neg[i];
        }
        // Append remaining negatives
        int idx = (int)pos.size() * 2;
        for (int i = (int)pos.size(); i < (int)neg.size(); ++i) {
            res[idx++] = neg[i];
        }
    }
    return res;
}