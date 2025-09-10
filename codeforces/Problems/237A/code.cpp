/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; i++) {
        int h, m;
        cin >> h >> m;
        mp[{h, m}]++;
    }
    int ans = INT_MIN;
    for (auto it: mp) {
        if (it.second > ans) {
            ans = it.second;
        }
    }
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