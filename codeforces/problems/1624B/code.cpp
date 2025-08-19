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
        int a, b, c;
        cin >> a >> b >> c;
        int xa = 2 * b - c, xb = (a + c) / 2, xc = 2 * b - a;
        if ((xa / a > 0 && xa % a == 0) || (xb / b > 0 && xb % b == 0 && (c - a) % 2 == 0) || (xc /c > 0 && xc % c == 0)) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}