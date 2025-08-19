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
        bool flag = false;
        for (int i = 1; i < n - 1; i++) {
            if (v[i] > v[i - 1] && v[i] > v[i + 1]) {
                cout << "YES\n";
                cout << i << ' ' << i + 1 << ' ' << i + 2 << '\n';
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO\n";
        }
    }
    return 0;
}