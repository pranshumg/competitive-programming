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
        int a, b, c, d;
        cin >> a;
        int ans = 0;
        cin >> b;
        if (b > a) {
            ans++;
        }
        cin >> c;
        if (c > a) {
            ans++;
        }
        cin >> d;
        if (d > a) {
            ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}