/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int64_t func(int k, int cnt) {
    int64_t ans = 0;
    int j = 1;
    for (int i = cnt; i >= k; i--) {
        ans += j++;
    }
    return ans;
}

void run_case() {
    int n, k, q;
    cin >> n >> k >> q;
    vector<int> v(n);
    int cnt = 0;
    int64_t ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] <= q) {
            cnt++;
        } else {
            if (cnt >= k) { 
                ans += func(k, cnt);
            }
            cnt = 0;
        }
    }
    if (cnt >= k) {
        ans += func(k, cnt);
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