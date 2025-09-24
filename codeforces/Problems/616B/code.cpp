/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        int street_min = INT_MAX;
        for (int j = 0; j < m; j++) {
            int curr;
            cin >> curr;
            street_min = min(street_min, curr);
        }
        ans = max(ans, street_min);
    }
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}