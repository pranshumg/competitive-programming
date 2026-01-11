#include <bits/stdc++.h>

using namespace std;

/* Power exponentiation */

// TC - O(log n), SC - O(1)
double pow(double x, int n) {
    double ans = 1.0;
    // Use int64_t to safely handle n = INT_MIN because abs(INT_MIN) overflows int
    int64_t m = abs((int64_t)n);
    while (m > 0) {
        if (m & 1) {
            ans *= x;
        }
        x *= x;
        m >>= 1;
    }
    if (n < 0) {
        ans = 1.0 / ans;
    }
    return ans;
}