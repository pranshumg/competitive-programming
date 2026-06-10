#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* Pow(x, n) */
// https://leetcode.com/problems/powx-n/

// TC - (log n), SC - O(log n)
i64 power(i64 x, int n) {
    if (n == 0) {
        return 1;
    }
    if (n & 1) return x * power(x, n - 1);
    return power(x * x, n / 2);
}