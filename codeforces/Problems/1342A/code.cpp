/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t x, y, a, b;
    cin >> x >> y >> a >> b;
    if (a * 2 <= b) {
        cout << a * (x + y) << '\n';
        return;
    }
    if (x < y) {
        swap(x, y);
    }
    cout << (b * y) + (x - y) * a << '\n';
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