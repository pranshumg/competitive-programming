/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        int n;
        cin >> n;
        if (n > 2) {
            cout << n - ((n / 2) * 2) << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
    return 0;
}