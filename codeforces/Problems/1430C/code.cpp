/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int res = n;
    cout << 2 << '\n' << n << ' ' << n - 1 << '\n';
    for (int i = n - 1; i > 1; i--) {
        cout << (res + i + 1) / 2 << ' ' << i - 1 << '\n';
        res = (res + i + 1) / 2;
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