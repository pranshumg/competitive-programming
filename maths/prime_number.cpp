#include <bits/stdc++.h>

using namespace std;

/* Prime number */

// TC - O(n)
bool is_prime(int n) {
    int cnt = 0;
    for (int i = 2; i < n; ++i) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

// TC - O(sqrt(n))
bool is_prime(int n) {
    int cnt = 0;
    for (int i = 1; i * i <= n; ++i) {
        if (n % i == 0) {
            ++cnt;
            if (n / i != i) {
                ++cnt;
            }
        }
    }
    return cnt == 2;
}