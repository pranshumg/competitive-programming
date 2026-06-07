#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* find the element at given row and column */

// TC - O(r), SC - O(1)
i64 nCr(int n, int r) {
    i64 res = 1;
    for (int i = 0; i < r; i++) {
        res *= (n - i);
        res /= (i + 1);
    }
    return res;
}