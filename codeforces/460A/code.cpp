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
    for (int i = 1; i <= n; i++) {
        ans++;
        if (i % m == 0) {
            n++;
        }
    }
    cout << ans;
    return 0;
}