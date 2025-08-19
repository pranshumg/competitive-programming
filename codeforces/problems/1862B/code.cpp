/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> v(n), ans;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i == 0) {
                ans.emplace_back(v[i]);
            } else {
                if (v[i] >= v[i - 1]) {
                    ans.emplace_back(v[i]);
                } else {
                    ans.emplace_back(v[i]);
                    ans.emplace_back(v[i]);
                }
            }
        }
        cout << ans.size() << '\n';
        for (auto it: ans) {
            cout << it << ' ';
        }
        cout << '\n';
    }
    return 0;
}