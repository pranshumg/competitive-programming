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
        int64_t a, b;
        cin >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        if (a == b) {
            cout << 0 << ' ' << 0 << '\n';
        } else {
            cout << a - b << ' ' << min(b % (a - b), (a - b) - b % (a - b)) << '\n';
        }
    }
    return 0;
}