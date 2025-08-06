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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        if (k == 4) {
            int cnt = 0, rem = 0;
            bool flag = false;
            for (int i = 0; i < n; i++) {
                if (v[i] % 2 == 0) {
                    cnt++;
                }
                if (v[i] % 4 == 0 || cnt == 2) {
                    flag = true;
                    break;
                } else if (v[i] == 3 || v[i] == 7) {
                    rem = 1;
                }
            }
            if (cnt == 2 || flag) {
                cout << 0 << '\n';
            } else if (rem == 1) {
                cout << 1 << '\n';
            } else {
                cout << 2 - cnt << '\n';
            }
        } else {
            int m, ans = INT_MAX;
            for (int i = 0; i < n; i++) {
                if (v[i] % k == 0) {    
                    m = 0;
                } else {
                    if (v[i] < k) {
                        m = k - v[i];
                    } else {
                        m = k - (v[i] % k);
                    }
                }
                ans = min(ans, m);
            }
            cout << ans << '\n';
        }
    }
    return 0;
}