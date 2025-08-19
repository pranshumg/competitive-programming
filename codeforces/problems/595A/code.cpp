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
    int ans = 0;
    vector<vector<int>> v(n, vector<int>(2 * m));
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 2 * m; j++) {
            cin >> v[i][j];
            if (j % 2 != 0) {
                if (v[i][j] + v[i][j - 1] != 0) {
                    ans += 1;
                }
            }
        }
    }
    cout << ans;
    return 0;
}