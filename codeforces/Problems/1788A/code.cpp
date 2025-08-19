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
        vector<int> v(n);
        int cnt1 = 0, cnt2 = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (v[i] == 2) {
                cnt1++;
            }
        }
        if (cnt1 % 2 != 0) {
            cout << -1 << '\n';
        } else {
            int ans;
            for (int i = 0; i < n - 1; i++) {
                if (v[i] == 2) {
                    cnt2++;
                }
                if (cnt1 / 2 == cnt2) {
                    ans = i + 1;
                    break;
                }
            }
            cout << ans << '\n';
        }
    }
    return 0;
}