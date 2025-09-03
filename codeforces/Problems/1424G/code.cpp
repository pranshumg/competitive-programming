/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    map<int64_t, int64_t> mp;
    for (int i = 0; i < n; i++) {
        int64_t a, b;
        cin >> a >> b;
        mp[a]++, mp[b]--;
    }
    int64_t sum = 0, yr = 0, ans = 0;
    for (auto it: mp) {
        sum += it.second;
        if (sum > ans) {
            ans = sum, yr = it.first;
        }
    }
    cout << yr << ' ' << ans << '\n';
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