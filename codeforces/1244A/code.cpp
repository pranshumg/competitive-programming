/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d, k;
        cin >> a >> b >> c >> d >> k;
        int x = 0, y = 0;
        if (a % c == 0) {
            x += a / c;
        } else {
            x += a / c + 1;
        }
        if (b % d == 0) {
            y += b / d;
        } else {
            y += b / d + 1;
        }
        if (x + y <= k) {
            cout << x << " " << y << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}
