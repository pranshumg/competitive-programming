/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b, c;
    cin >> a >> b >> c;
    if (a > c) {
        cout << -1 << ' ' <<  b << '\n';
    } else if (a < c) {
        if (c / b < a) {
            cout << 1 << ' ' << b << '\n';
        } else {
            cout << 1 << ' ' << -1 << '\n';
        }
    } else {
        if (b == 1) {
            cout << -1 << ' ' << -1 << '\n';
        } else {
            cout << -1 << ' ' << b << '\n';
        }
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