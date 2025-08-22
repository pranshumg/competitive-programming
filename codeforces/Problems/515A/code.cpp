/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b, c;
    cin >> a >> b >> c;
    a = abs(a), b = abs(b);
    if ((c - a - b) % 2 == 0 && (a + b <= c)) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}