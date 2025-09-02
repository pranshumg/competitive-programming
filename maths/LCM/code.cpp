#include <bits/stdc++.h>

using namespace std;

// TC - O(max(n, m)), SC - O(1)
int lcm(int n, int m) {
    int res = 1, d = 2;
    while (n > 1 || m > 1) {
        if (n % d == 0 || m % d == 0) {
            if (n % d == 0) {
                n /= d;
            }
            if (m % d == 0) {
                m /= d;
            }
            res *= d;
        } else {
            d++;
        }
    }
    return res;
}

// Optimal (TC - O(log(min(n, m))), SC - O(1))
int gcd(int n, int m) {
    while (n > 0 && m > 0) {
        if (n > m) {
            n %= m;
        } else {
            m %= n;
        }
    }
    return (n == 0 ? m : n);
}

int lcm(int n, int m) {
    return (n * m) / (gcd(n, m));
}