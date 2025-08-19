/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int four = 0, seven = 0;
    while (n > 0) {
        if (n % 4 == 0 || n % 7 == 0) {
            if (n % 7 == 0) {
                seven += n / 7, n = 0;
            } else {
                four++ , n -= 4;
            }
        } else {
            if ((n - 4) % 7 == 0) {
                four++, n -= 4;
            } else {
                seven++, n -= 7;
            }
        }
    }
    if (n < 0) {
        cout << -1 << '\n';
    } else {
        for (int i = 0; i < four; i++) {
            cout << 4;
        }
        for (int i = 0; i < seven; i++) {
            cout << 7;
        }
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