/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b;
    cin >> a >> b;
    if (a % 2 != 0 && b % 2 != 0) {
        cout << a * b + 1 << '\n';
        return;
    }
    if ((a % 2 == 0 && b % 2 == 0) || (a % 2 != 0 && b % 2 == 0 && (b / 2) % 2 == 0)) {
        cout << a * b / 2 + 2 << '\n';
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