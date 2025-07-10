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
        int b, c;
        vector<int> v(k, 0);
        for (int i = 0; i < k; i++) {
            cin >> b >> c;
            v[b - 1] += c;
        }
        sort(v.rbegin(), v.rend());
        int64_t ans = 0;
        for (int i = 0; i < min(k, n); i++) {
            ans += v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}