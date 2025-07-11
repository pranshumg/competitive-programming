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
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        vector<int> res;
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                if (v[i] > v[j]) {
                    res = {v[i], v[j]};
                }
            }
        }
        if (res.empty()) {
            cout << "NO\n";
        } else {
            cout << "YES\n" << 2 << '\n' << res[0] << " " << res[1] << '\n';
        }
    }
    return 0;
}