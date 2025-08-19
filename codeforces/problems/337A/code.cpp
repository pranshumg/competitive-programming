/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    int ans = INT_MAX;
    for (int i = 0; i <= m - n; i++) {
        ans = min(ans, v[n - 1 + i] - v[i]);
    }
    cout << ans;
    return 0;
}