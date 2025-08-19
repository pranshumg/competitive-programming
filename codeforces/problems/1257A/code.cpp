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
        int n, x, a, b;
        cin >> n >> x >> a >> b;
        if (a < b) {
            swap(a, b);
        }
        int swaps = 0;
        if (x >= n - a) {
            swaps += n - a;
            x -= n - a;
            if (x >= b - 1) {
                swaps += b - 1;
                x -= b - 1;
            } else {
                swaps += x;
            }
        } else {
            swaps += x;
        }
        cout << a - b + swaps << '\n';
    }
    return 0;
}
