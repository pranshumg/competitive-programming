/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n, m;
    cin >> n >> m;
    vector<int> a(n), b(n);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i] >> b[i];
        if (i == 0) {
            ans += (a[i] % 2 == b[i] ? a[i] : a[i] - 1);
        } else {
            if (((a[i] - a[i - 1]) % 2 == 0 && b[i] == b[i - 1]) || ((a[i] - a[i - 1]) % 2 != 0 && b[i] != b[i - 1])) {
                ans += a[i] - a[i - 1];
            } else {
                ans += a[i] - a[i - 1] - 1;
            }
        }
    }
    if (a[n - 1] < m) {
        ans += m - a[n - 1];
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