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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        bool flag = true;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i > 0 && v[i] < v[i - 1]) {
                flag = false;
            }
        }
        if (k > 1 || flag) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}