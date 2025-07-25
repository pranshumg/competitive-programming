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
        vector<int> v(4);
        for (int i = 0; i < 4; i++) {
            cin >> v[i];
        }
        int f = max(v[0], v[1]), s = max(v[2], v[3]);
        sort(v.begin(), v.end());
        if (f + s == v[2] + v[3]) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}