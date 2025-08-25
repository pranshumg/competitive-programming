/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.rbegin(), v.rend());
    int64_t ans = 0;
    for (int i = 0; i < n; i += 2) {
        ans += v[i];
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