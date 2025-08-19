/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    int ans = 0;
    char curr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> curr;
            if ((j == m - 1 && curr == 'R') || (i == n - 1 && curr == 'D')) {
                ans++;
            } 
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