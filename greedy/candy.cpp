#include <bits/stdc++.h>

using namespace std;

/* Candy */

// Method 1: Two Pass Arrays
// TC - O(n), SC - O(n)
int candy(vector<int>& v) {
    if (v.empty()) return 0;
    // 'l' stores candies required satisfying only left neighbors
    // 'r' stores candies required satisfying only right neighbors
    vector<int> l((int)v.size()), r((int)v.size());
    // Left pass
    l.front() = 1;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (v[i] > v[i - 1]) {
            l[i] = l[i - 1] + 1;
        } else {
            l[i] = 1;
        }
    }
    // Right pass
    r.back() = 1;
    for (int i = (int)v.size() - 2; i >= 0; --i) {
        if (v[i] > v[i + 1]) {
            r[i] = r[i + 1] + 1;
        } else {
            r[i] = 1;
        }
    }
    // Final result is the max requirement of both neighbors
    int ans = 0;
    for (int i = 0; i < (int)v.size(); ++i) {
        ans += max(l[i], r[i]);
    }
    return ans;
}

// Method 2: Single Array + Variable
// TC - O(n), SC - O(n)
int candy(vector<int>& v) {
    if (v.empty()) return 0;
    vector<int> l((int)v.size());
    // Left pass (store in vector)
    l.front() = 1;
    for (int i = 1; i < (int)v.size(); ++i) {
        if (v[i] > v[i - 1]) {
            l[i] = l[i - 1] + 1;
        } else {
            l[i] = 1;
        }
    }
    // Right pass (calculate on the fly)
    int cur = 1, r = 1; // 'r' tracks the previous right-pass value
    int ans = max(1, l.back());
    for (int i = (int)v.size() - 2; i >= 0; --i) {
        if (v[i] > v[i + 1]) {
            cur = r + 1;
        } else {
            cur = 1;
        }
        r = cur;
        ans += max(cur, l[i]);
    }
    return ans;
}

// Method 3: Slope Approach (Peaks and Valleys)
// TC - O(n), SC - O(1)
int candy(vector<int>& v) {
    if (v.empty()) return 0;
    int sum = 1, i = 1;
    int n = (int)v.size();
    while (i < n) {
        // Flat surface: resets the slope
        if (v[i] == v[i - 1]) {
            ++sum, ++i;
            continue;
        }
        // Upward Slope (Mountain)
        int peak = 1;
        while (i < n && v[i] > v[i - 1]) {
            ++peak;
            sum += peak;
            ++i;
        }
        // Downward Slope (Valley)
        int down = 1;
        while (i < n && v[i] < v[i - 1]) {
            sum += down;
            ++down, ++i;
        }
        // Correction: If the valley is deeper than the mountain was high,
        // we must increase the peak to accommodate the long tail.
        // (Note: 'down' incremented one extra time in the loop, so we compare down > peak)
        if (down > peak) {
            sum += (down - peak);
        }
    }
    return sum;
}