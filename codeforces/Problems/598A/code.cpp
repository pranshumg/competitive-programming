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
        int64_t ans = (n * (n + 1)) / 2, curr = 1;
        while (curr <= n) {
            ans -= (curr * 2);
            curr *= 2;
        }
        cout << ans << '\n';
    }
    return 0;
}