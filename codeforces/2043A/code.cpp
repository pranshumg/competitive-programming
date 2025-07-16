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
        int64_t n;
        cin >> n;
        int ans = 1;
        while (n > 3) {
            ans *= 2;
            n /= 4;
        }
        cout << ans << '\n';
    }
    return 0;
}