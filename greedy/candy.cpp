#include <bits/stdc++.h>

using namespace std;

/* Candy */

// TC - O(n), SC - O(n)
int candy(vector<int>& v) {
    vector<int> l((int)v.size()), r((int)v.size());
    l.front() = 1, r.back() = 1;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (v[i] > v[i - 1]) {
            l[i] = l[i - 1] + 1;
        } else {
            l[i] = 1;
        }
    }
    for (int i = (int)v.size() - 2; i >= 0; --i) {
        if (v[i] > v[i + 1]) {
            r[i] = r[i + 1] + 1;
        } else {
            r[i] = 1;
        }
    }
    int ans = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        ans += max(l[i], r[i]);
    }
    return ans;
}

// TC - O(n), SC - O(n)
int candy(vector<int>& v) {
    vector<int> l((int)v.size());
    l.front() = 1;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (v[i] > v[i - 1]) {
            l[i] = l[i - 1] + 1;
        } else {
            l[i] = 1;
        }
    }
    int cur = 1, r = 1;
    int ans = max(1, l.back());
    for (int i = (int)v.size() - 2; i >= 0; --i) {
        if (v[i] > v[i + 1]) {
            cur = r + 1, r = cur;
        } else {
            cur = 1;
        }
        ans += max(cur, l[i]);
    }
    return ans;
}

// TC - O(n), SC - O(1)
int candy(vector<int>& v) {
    int sum = 1, i = 1;
    while (i < (int)v.size()) {
        if (v[i] == v[i - 1]) {
            ++sum, ++i;
            continue;
        }
        int peak = 1;
        while (i < (int)v.size() && v[i] > v[i - 1]) {
            ++peak, sum += peak, ++i;
        }
        int down = 1;
        while (i < (int)v.size() && v[i] < v[i - 1]) {
            sum += down, ++down, ++i;
        }
        if (down > peak) {
            sum += down - peak;
        }
    }
    return sum;
}