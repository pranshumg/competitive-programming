#include <bits/stdc++.h>

using namespace std;

/* Assign cookies */

// TC - O(n log n + m log m), SC - O(1)
int assign_cookies(vector<int> &size, vector<int> &greed) {
    sort(size.begin(), size.end());
    sort(greed.begin(), greed.end());
    int l = 0, r = 0;
    while (l < (int)size.size() && r < (int)greed.size()) {
        if (size[l] >= greed[r]) {
            ++r;
        }
        ++l;
    }
    return r;
}