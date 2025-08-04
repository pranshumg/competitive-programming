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
        if (n % 4 == 0) {
            cout << n / 4 << '\n';
        } else {
            cout << (n / 4) + 1 << '\n';
        }
    }
    return 0;
}