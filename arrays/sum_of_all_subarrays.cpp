#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* Sum of all subarrays */

// prefix sum
// TC - O(n), SC - O(n)
i64 sum(vector<int>& v, int n) {
    vector<i64> pfx(n + 1, 0);
    for (int i = 0; i < n; i++) {
        pfx[i + 1] = pfx[i] + v[i];
    }
    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        ans += pfx[i + 1] * (i + 1) - pfx[i];
    }
    return ans;
}

// math
// TC - O(n), SC - O(1)
i64 sum(vector<int>& v, int n) {
    i64 ans = 0;
    for (int i = 0; i < n; i++) {
        ans += i64(v[i]) * (i + 1) * (n - i);
    }
    return ans;
}