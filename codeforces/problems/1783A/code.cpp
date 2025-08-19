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
        if (v[0] == v[n - 1]) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
            int i = 0, j = n - 1;
            while (i < j) {
                cout << v[i++] << ' ' << v[j--] << ' ';
            }
            if (n % 2 != 0) {
                cout << v[i];
            }
            cout << '\n';
        }
    }
    return 0;
}