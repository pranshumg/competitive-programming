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
        int n, x;
        cin >> n >> x;
        vector<int> v(n);
        int64_t maxi = 0, mini = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            mini += v[i];
            maxi += (v[i] + x - 1) / x;
        }
        cout << (mini + x - 1) / x << ' ' << maxi << '\n';
    }
    return 0;
}