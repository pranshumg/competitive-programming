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
        int m, a, b, c;
        cin >> m >> a >> b >> c;
        int ts = 2 * m, ans = 0;
        (m >= a ? (ans += a, ts -= a) : (ans += m, ts -= m));
        (m >= b ? (ans += b, ts -= b) : (ans += m, ts -= m));
        (ts >= c ? (ans += c) : (ans += ts));
        cout << ans << '\n';
    }
    return 0;
}