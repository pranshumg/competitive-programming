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
        int64_t x, n;
        cin >> x >> n;
        if (n == 0) {
            x = x;
        } else if (x % 2 == 0) {
            x += (-4 * ((n - 1) / 4));
            int cnt = 0;
            for (int64_t i = (4 * ((n - 1) / 4)) + 2; i <= n; i++) {
                if (cnt < 2) {
                    x += i, cnt++;
                } else {
                    x += -i;
                }
            }
            x--;
        } else {
            x += (4 * ((n - 1) / 4));
            int cnt = 0;
            for (int64_t i = (4 * ((n - 1) / 4)) + 2; i <= n; i++) {
                if (cnt < 2) {
                    x += -i, cnt++;
                } else {
                    x += i;
                }
            }
            x++;
        }
        cout << x << '\n';
    }
    return 0;
}