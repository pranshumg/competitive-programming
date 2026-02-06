#include <bits/stdc++.h>

using namespace std;

/* Count Inversions */

// Brute 
// TC - O(n * n), SC - O(1)
int inversions(vector<int>& v, int n) {
    int cnt = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i + 1; j < n; ++j) {
            if (v[i] > v[j]) {
                ++cnt;
            }
        }
    }
    return cnt;
}

// Optimal (merge sort)
// TC - O(n log n), SC - O(n)
int merge_count(vector<int>& v, int l, int m, int h) {
    int cnt = 0;
    vector<int> tmp;
    int left = l, right = m + 1;
    while (left <= m && right <= h) {
        if (v[left] <= v[right]) {
            tmp.emplace_back(v[left++]);
        } else {
            cnt += m - left + 1;
            tmp.emplace_back(v[right++]);
        }
    }
    while (left <= m) {
        tmp.emplace_back(v[left++]);
    }
    while (right <= h) {
        tmp.emplace_back(v[right++]);
    }
    for (int i = l; i <= h; i++) {
        v[i] = tmp[i - l];
    }
    return cnt;
}

int merge_sort_count(vector<int>& v, int l, int h) {
    if (l >= h) {
        return 0;
    }
    int m = (l + h) >> 1;
    int cnt = 0;
    cnt += merge_sort_count(v, l, m);
    cnt += merge_sort_count(v, m + 1, h);
    cnt += merge_count(v, l, m, h);
    return cnt;
}

int inversions(vector<int>& v, int n) {
    return merge_sort_count(v, 0, n - 1);
}