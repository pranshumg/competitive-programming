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
        int x;
        cin >> x;
        int ans = 0;
        ans += x / 7;
        x %= 7;
        if (x == 1) {
            ans -= (x / 7) - 1;
            x += 7;
        }
        ans += x / 6;
        x %= 6;
        if (x == 1) {
            ans -= (x / 6) - 1;
            x += 6;
        }
        ans += x / 5;
        x %= 5;
        if (x == 1) {
            ans -= (x / 5) - 1;
            x += 5;
        }
        ans += x / 4;
        x %= 4;
        if (x == 1) {
            ans -= (x / 4) - 1;
            x += 4;
        }
        ans += x / 3;
        x %= 3;
        if (x == 1) {
            ans -= (x / 3) - 1;
            x += 3;
        }
        ans += x / 2;
        x %= 2;
        cout << ans << '\n';
    }
    return 0;
}