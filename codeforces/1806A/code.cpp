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
        int64_t a, b, c, d;
        cin >> a >> b >> c >> d;
        a += d - b;
        if (a < c || d < b) {
            cout << -1 << '\n';
        } else {
            cout << d - b + a - c << '\n';
        }
    }
    return 0;
}