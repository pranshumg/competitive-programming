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
        int n, even = 0, odd = 0, curr;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr % 2 == 0) {
                even += curr;
            } else {
                odd += curr;
            }
        }
        if (even > odd) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}