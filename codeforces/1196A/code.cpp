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
        int64_t a, b, c;
        cin >> a >> b >> c;
        cout << (a + b + c) / 2 << '\n';
    }
    return 0;
}