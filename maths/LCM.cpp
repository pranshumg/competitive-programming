#include <bits/stdc++.h>

using namespace std;

using i64 = int64_t;

/* Optimal LCM function using the relation: LCM(n, m) = (n * m) / GCD(n, m) */

// TC - O(log(min(n, m))), SC - O(1)
int gcd(int n, int m) {
    while (n > 0 && m > 0) {
        n > m ? n %= m : m %= n;
    }
    return (n == 0 ? m : n);
}

int lcm(int n, int m) {
    // Cast to int64_t to prevent overflow during multiplication
    i64 prod = i64(n * m);
    return prod / gcd(n, m);
}