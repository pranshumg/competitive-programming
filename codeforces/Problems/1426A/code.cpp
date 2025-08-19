/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, x;
    cin >> n >> x;
    if (n == 1 || n == 2) {
        cout << 1 << '\n';
        return;
    }
    cout << ((n - 2) + x - 1) / x + 1 << '\n';
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