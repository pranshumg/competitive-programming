/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    int ans = -1;
    if (m % n == 0) {
        ans = 0;
        int d = m / n;
        while (d % 2 == 0) {
            d /= 2, ans++;
        }
        while (d % 3 == 0) {
            d /= 3, ans++;
        }
        if (d != 1) {
            ans = -1;
        }
    }
    cout << ans << '\n';
    return 0;
}