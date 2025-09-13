/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m, x, y;
    cin >> n >> m >> x >> y;
    int ans = 0, curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr < y) {
            ans++;
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> curr;
        if (curr < x) {
            ans++;
        }
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}