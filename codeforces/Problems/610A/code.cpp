/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n;
    cin >> n;
    if ((n - 2) % 2 != 0) {
        cout << 0;
    } else if (n % 4 == 0) {
        cout << n / 4 - 1;
    } else {
        cout << n / 4;
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