/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b) {
        swap(a, b), swap(c, d);
    }
    int x = min(c - a, d - b), y = max(c - a, d - b);
    cout << ((b + a) / (a + 1) < 3 && (y + x) / (x + 1) < 3 ? "YES\n" : "NO\n");
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