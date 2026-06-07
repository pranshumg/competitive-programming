#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* Power exponentiation */
// https://leetcode.com/problems/powx-n/

// TC - O(log n), SC - O(1)
i64 power(i64 x, int n) {
    i64 ans = 1;
    // Use int64_t to safely handle n = INT_MIN because abs(INT_MIN) overflows int
    i64 m = abs(i64(n));
    while (m) {
        if (m & 1) {
            ans *= x;
        }
        x *= x;
        m >>= 1;
    }
    if (n < 0) {
        ans = 1 / ans;
    }
    return ans;
}