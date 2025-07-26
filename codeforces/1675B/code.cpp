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
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int ans = 0;
        for (int i = n - 1; i >= 1; i--) {
            while (v[i] <= v[i - 1] && v[i - 1] != 0) {
                v[i - 1] /= 2;
                ans++;
            }
        }
        bool flag = true;
        for (int i = 0; i < n - 1; i++) {
            if (v[i] >= v[i + 1]) {
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << ans << '\n';
        } else {
            cout << -1 << '\n';
        }
    }
    return 0;
}