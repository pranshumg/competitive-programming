/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t x, y;
    cin >> x >> y;
    if (x < y) {
        cout << 2 << '\n';
        return;
    }
    if (x > y && x - y > 1 && y > 1) {
        cout << 3 << '\n';
        return;
    }
    cout << -1 << '\n';
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