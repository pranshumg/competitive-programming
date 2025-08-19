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
        vector<pair<int, int>> vp(n);
        for (int i = 0; i < n; i++) {
            cin >> vp[i].first;
            vp[i].second = i;
        }
        vector<int> b(n), ans(n);
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(vp.begin(), vp.end());
        sort(b.begin(), b.end());
        for (int i = 0; i < n; i++) {
            ans[vp[i].second] = b[i];
        }
        for (int i = 0; i < n; i++) {
            cout << ans[i] << ' ';
        }
        cout << '\n';
    }
    return 0;
}