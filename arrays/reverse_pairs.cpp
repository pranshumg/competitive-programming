#include <bits/stdc++.h>

using namespace std;

/* Reverse pairs */

// Brute 
// TC - O(n * n), SC - O(1)
int reverse_pairs(vector<int>& v, int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i] > 2 * v[j]) {
                ++cnt;
            }
        }
    }
    return cnt;
}

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

int count_pairs(vector<int>& v, int l, int m, int h) {
    int j = m + 1, cnt = 0;
    for (int i = l; i <= m; ++i) {
        while (j <= h && v[i] > 2 * v[j]) {
            ++j;
        }
        cnt += j - (m + 1);
    }
    return cnt;
}

int merge_sort(vector<int>& v, int l, int h) {
    int cnt = 0;
    if (l >= h) {
        return cnt;
    }
    int m = (l + h) >> 1;
    cnt += merge_sort(v, l, m);
    cnt += merge_sort(v, m + 1, h);
    cnt += count_pairs(v, l, m, h);
    merge(v, l, m, h);
    return cnt;
}

// Optimal 
// TC - O(n log n), SC - O(n)
int reverse_pairs(vector<int>& v, int n) {
    return merge_sort(v, 0, n - 1);
}