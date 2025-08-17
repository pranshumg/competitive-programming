/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t x, y, z;
    cin >> x >> y >> z;
    cout << (x + y) / z << ' ';
    if ((x / z) + (y / z) == (x + y) / z) {
        cout << 0 << '\n';
        return;
    }
    cout << min({x % z, (((x + z - 1) / z) * z) - x, y % z, (((y + z - 1) / z) * z) - y}) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}