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
        int n, k;
        cin >> n >> k;
        if (n % 2 == 0) {
            if (n % (k - 1) == 0) {
                cout << n / (k - 1) << '\n';
            } else {
                cout << n / (k - 1) + 1 << '\n';
            }
        } else {
            if ((n - k) % (k - 1) == 0) {
                cout << (n - k) / (k - 1) + 1 << '\n';
            } else {
                cout << (n - k) / (k - 1) + 2 << '\n';
            }
        }
    }
    return 0;
}