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
        int n, k, x;
        cin >> n >> k >> x;
        if (k == 1 && x == 1) {
            cout << "NO\n";
        } else if (x != 1) {
            cout << "YES\n" << n << '\n';
            for (int i = 0; i < n; i++) {
                cout << 1 << ' ';
            }
            cout << '\n';
        } else {
            if (n % 2 == 0) {
                cout << "YES\n" << n / 2 << '\n';
                for (int i = 0; i < n / 2; i++) {
                    cout << 2 << ' ';
                }
                cout << '\n';
            } else {
                if (k == 2) {
                    cout << "NO\n";
                } else {
                    cout << "YES\n" << ((n - 3) / 2) + 1 << '\n' << 3 << ' ';
                    for (int i = 0; i < (n - 3) / 2; i++) {
                        cout << 2 << ' ';
                    }
                    cout << '\n';
                }
            }
        }
    }
    return 0;
}