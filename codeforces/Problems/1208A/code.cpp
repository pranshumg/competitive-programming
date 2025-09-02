/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t a, b, n;
    cin >> a >> b >> n;
    if (n % 3 == 0) {
        cout << a;
    } else if (n % 3 == 1) {
        cout << b;
    } else {
        cout << (a ^ b);
    }
    cout << '\n';
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