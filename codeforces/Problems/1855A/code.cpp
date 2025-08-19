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
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            if (v[i] == i + 1) {
                cnt++;
            }
        }
        if (cnt % 2 == 0) {
            cout << cnt / 2 << '\n';
        } else {
            cout << cnt / 2 + 1 << '\n';
        }
    }
    return 0;
}