/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a + 2 * b == c && a + b + c == d) {
        cout << 3 << '\n';
        return;
    }
    if (a + 2 * b == c || 2 * c - b == d || a + b + c == d) {
        cout << 2 << '\n';
        return;
    }
    cout << 1 << '\n';
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