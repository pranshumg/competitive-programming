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
        int x, y, n;
        cin >> x >> y >> n;
        int d = n / x;
        int ans = (d * x) + y;
        if (ans <= n) cout << ans << '\n';
        else cout << ((d - 1) * x) + y << '\n';
    }
    return 0;
}