#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* Ceil division */

// TC - O(1), SC - O(1)
i64 ceil_div(i64 a, i64 b) {
    assert(b != 0);
    if (b < 0) {
        a = -a, b = -b;
    }
    if (a >= 0) {
        return (a + b - 1) / b;
    }
    return a / b;
}