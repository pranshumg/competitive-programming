/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n, k;
    cin >> n >> k;
    if (n == 1 || k == 1 || n % k == 0) {
        if (n == 1) {
            cout << k << '\n';
        } else {
            cout << 1 << '\n';
        }
        return;
    }
    if (n < k) {
        cout << (k + n - 1) / n << '\n';
    } else {
        cout << 2 << '\n';
    }
    
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}