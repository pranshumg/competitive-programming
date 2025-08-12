/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n * k);
    for (int i = 0; i < n * k; i++) {
        cin >> v[i];
    }
    int64_t ans = 0;
    for (int i = (n * k - 1 - n / 2); i >= 0 && k > 0; i = i - (n / 2) - 1) {
        ans += v[i], k--;
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