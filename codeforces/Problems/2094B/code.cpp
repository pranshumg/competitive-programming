/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;
    r -= n - m;
    if (r >= 0) {
        cout << l << ' ' << r << '\n';
        return;
    }
    cout << l - r << ' ' << 0 << '\n';
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