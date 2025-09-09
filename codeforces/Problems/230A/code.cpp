/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int s, n;
    cin >> s >> n;
    vector<pair<int, int>> vp(n);
    for (int i = 0; i < n; i++) {
        cin >> vp[i].first >> vp[i].second;
    }
    sort(vp.begin(), vp.end());
    for (int i = 0; i < n; i++) {
        if (s <= vp[i].first) {
            cout << "NO\n";
            return;
        }
        s += vp[i].second;
    }
    cout << "YES\n";
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