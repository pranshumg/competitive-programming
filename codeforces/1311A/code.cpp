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
        int a, b;
        cin >> a >> b;
        if (b > a) {
            if ((b - a) % 2 == 0) {
                cout << 2 << '\n';
            } else {
                cout << 1 << '\n';
            }
        } else if (a > b) {
            if ((a - b) % 2 != 0) {
                cout << 2 << '\n';
            } else {
                cout << 1 << '\n';
            }
        } else {
            cout << 0 << '\n';
        }
    }
    return 0;
}