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
        int cnt = 0, ans = 0, curr;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr == 0) {
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