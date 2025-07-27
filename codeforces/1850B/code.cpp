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
        int n;
        cin >> n;
        int a, b, ans, q = 0;
        for (int i = 1; i <= n; i++) {
            cin >> a >> b;
            if (i == 1 && a <= 10) {
                ans = i, q = b;
            } else if (a <= 10 && b > q) {
                ans = i, q = b;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}