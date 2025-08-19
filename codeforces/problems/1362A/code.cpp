/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b;
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }
    if (a == b) {
        cout << 0 << '\n';
    } else if (a % b != 0) {
        cout << -1 << '\n';
    } else {
        int64_t c = a / b;
        int ans = 0;
        while (c != 1) {
            if (c % 8 == 0) {
                c /= 8;
            } else if (c % 4 == 0) {
                c /= 4;
            } else if (c % 2 == 0) {
                c /= 2;
            } else {
                ans = -1;
                break;
            }
            ans++;
        }
        cout << ans << '\n';
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