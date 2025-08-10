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
        vector<int> a(n), b(n);
        for (int i = 0; i < 2 * n; i++) {
            if (i < n) {
                cin >> a[i];
            } else {
                cin >> b[i - n];
            }
        }
        int ans = 1;
        for (int i = 0; i < n; i++) {
            if (a[i] > b[i]) {
                ans += a[i] - b[i];
            }
        }
        cout << ans << '\n';
    }
    return 0;
}