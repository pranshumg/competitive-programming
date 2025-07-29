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
        int ans = 0, cnt = 0;
        for (int i = 1; i <= 100; i++) {
            if (n % i == 0) {
                cnt++;
            } else {
                cnt = 0;
            }
            ans = max(ans, cnt);
        }
        cout << ans << '\n';
    } 
    return 0;
}