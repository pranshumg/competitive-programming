#include <bits/stdc++.h>

using namespace std;

/* Merge sort */

void merge(vector<int>& v, int l, int m, int h) {
    vector<int> tmp;
    int i = l, j = m + 1;
    while (i <= m && j <= h) {
        if (v[i] <= v[j]) {
            tmp.emplace_back(v[i++]);
        } else {
            tmp.emplace_back(v[j++]);
        }
    }
    while (i <= m) {
        tmp.emplace_back(v[i++]);
    }
    while (j <= h) {
        tmp.emplace_back(v[j++]);
    }
    for (int i = l; i <= h; ++i) {
        v[i] = tmp[i - l];
    }
}

// TC - O(n log n), SC - O(n)
void merge_sort(vector<int>& v, int l, int h) {
    if (l >= h) {
        return;
    }
    int m = (l + h) >> 1;
    merge_sort(v, l, m);
    merge_sort(v, m + 1, h);
    merge(v, l, m, h);
}