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
    vector<string> v1(n), v2(m);
    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> v2[i];
    }
    int q;
    cin >> q;
    while (q--) {
        int y;
        cin >> y;
        string ans = v1[(y - 1) % n] + v2[(y - 1) % m];
        cout << ans << '\n';
    }
    return 0;
}