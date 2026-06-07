#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

const int md = int(1e9) + 7;

/* Count Good Numbers */
// https://leetcode.com/problems/count-good-numbers/

i64 power(i64 a, i64 b) {
    if (b == 0) {
        return 1;
    }
    if (b & 1) {
        return (a * power(a, b - 1)) % md;
    }
    return (power((a * a) % md, b / 2)) % md;
}

int count_good_numbers(i64 n) {
    i64 ans = (power(5, n / 2) * power(4, n / 2)) % md;
    if (n & 1) ans = (ans * 5) % md;
    return ans;
}