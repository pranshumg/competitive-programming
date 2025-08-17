/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t x, y, k;
    cin >> x >> y >> k;
    cout << max(((x + k - 1) / k) * 2 - 1, ((y + k - 1) / k) * 2) << '\n';
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