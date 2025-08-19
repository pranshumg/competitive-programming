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
        int n, q;
        cin >> n >> q;
        vector<int> v(n + 1), prefix(n + 1);
        for (int i = 1; i <= n; i++) {
            cin >> v[i];
            prefix[i] = prefix[i - 1] + v[i];
        }
        while (q--) {
            int l, r;
            int64_t k;
            cin >> l >> r >> k;
            int64_t sum = prefix[l - 1] + (prefix[n] - prefix[r]);
            if ((sum + ((r - l + 1) * k)) % 2 != 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        }
    }
    return 0;
}