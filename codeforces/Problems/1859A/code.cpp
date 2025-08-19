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
        sort(v.begin(), v.end());
        int idx = - 1;
        for (int i = 1; i < n; i++) {
            if (v[i] > v[i - 1]) {
                idx = i;
                break;
            }
        }
        if (idx == -1) {
            cout << idx << '\n';
        } else {
            cout << idx  << ' ' << n - idx << '\n';
            for (int i = 0; i < idx; i++) {
                cout << v[i] << ' ';
            }
            cout << '\n';
            for (int i = idx; i < n; i++) {
                cout << v[i] << ' ';
            }
            cout << '\n';
        }
    }
    return 0;
}