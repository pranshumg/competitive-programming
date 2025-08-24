/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, k;
    cin >> n >> k;
    vector<int> v(k);
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        v[curr - 1]++;
    }
    int ans = 0, sets = 0, leftovers = 0;
    for (auto it: v) {
        ans += (it / 2) * 2;
        sets += it / 2;
        leftovers += it % 2;
    }
    ans += min(((n +  1) / 2) - sets, leftovers);
    cout << ans;
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