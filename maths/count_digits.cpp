#include <bits/stdc++.h>

using namespace std;

/* Count digits */

// TC - O(log n)
int count_digits(int n) {
    int cnt = 0;
    while (n) {
        ++cnt, n /= 10;
    }
    return cnt;
}

// TC - O(1)
int count_digits(int n) {
    return (int)(log10(n) + 1);
}