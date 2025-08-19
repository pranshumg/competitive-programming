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
        int64_t n, m;
        cin >> n >> m;
        if (n == 1) {
            cout << 0 << '\n';
        } else if (n == 2) {
            cout << m << '\n';
        } else {
            cout << m * 2 << '\n';
        }
    }
    return 0;
}