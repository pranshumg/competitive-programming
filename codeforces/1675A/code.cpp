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
        int a, b, c, x, y;
        cin >> a >> b >> c >> x >> y;
        int ax = min(a, x), by = min(b, y);
        a -= ax, x -= ax;
        b -= by, y -= by;
        if (c >= x + y) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}