/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int a, b;
    cin >> a >> b;
    if (a < b) {
        swap(a, b);
    }
    if ((a == b) || (b * 2 > a)) {
        cout << b * b * 4 << '\n';
    } else {
        cout << a * a << '\n';
    }
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