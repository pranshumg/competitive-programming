/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n, k;
    cin >> n >> k;
    vector<int64_t> v(n);
    int64_t maxi = INT_MIN;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        maxi = max(maxi, v[i]);
    }
    for (auto &it: v) {
        it = maxi - it;
    }
    if (k % 2 == 0) {
        auto maxi = *max_element(v.begin(), v.end());
        for (auto &it: v) {
            it = maxi - it;
        }
    }
    for (auto it: v) {
        cout << it << ' ';
    }
    cout << '\n';
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