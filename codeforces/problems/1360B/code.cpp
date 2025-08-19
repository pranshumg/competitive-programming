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
        sort(v.begin(), v.end());
        int ans = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            ans = min(ans, v[i + 1] - v[i]);
        }
        cout << ans << '\n';
    }
    return 0;
}