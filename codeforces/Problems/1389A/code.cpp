/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t l, r;
    cin >> l >> r;
    if (l * 2 > r) {
        cout << -1 << ' ' << -1 << '\n';
        return;
    }
    if (l == 1) {
        cout << 1 << ' ' << 2 << '\n';
    } else {
        cout << l << ' ' << l * 2 << '\n'; 
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