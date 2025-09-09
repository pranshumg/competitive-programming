/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    int idx = -1, el;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] % x != 0 && idx == -1) {
            idx = i, el = v[i];
        }
    }
    if (idx == -1) {
        cout << -1 << '\n';
        return;
    }
    int sum = 0, ans = INT_MIN;
    for (int i = 0; i < n; i++) {
        sum += v[i];
        if (sum % x != 0) {
            ans = i + 1;
        } else {
            if (i >= idx) {
                ans = max(ans, i - idx);
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