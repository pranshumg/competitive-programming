/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    vector<int64_t> odd, even;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr % 2 == 0) {
            even.emplace_back(curr);
        } else {
            odd.emplace_back(curr);
        }
    }
    int64_t ans = 0;
    if (odd.empty()) {
        cout << ans << '\n';
        return;
    }
    if (!even.empty()) {
        for (auto it: even) {
            ans += it;
        }
    }
    sort(odd.rbegin(), odd.rend());
    for (int i = 0; i < (int)odd.size() / 2; i++) {
        ans += odd[i];
    }
    if ((int)odd.size() % 2 != 0) {
        ans += odd[(int)odd.size() / 2];
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