/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int x, y, z;
    cin >> x >> y >> z;
    if ((y == z && x > y) || (x != y && y != z && z != x) || (x == y && z > x) || (x == z && y > x)) {
        cout << "NO\n";
        return;
    }
    int A = max({x, y, z}), B = min({x, y, z});
    cout << "YES\n" << A << ' ' << B << ' ' << B << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}