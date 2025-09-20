/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    int maxi = INT_MIN, ans;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if ((curr + m - 1) / m >= maxi) {
            ans = i + 1, maxi = (curr + m - 1) / m;
        }
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