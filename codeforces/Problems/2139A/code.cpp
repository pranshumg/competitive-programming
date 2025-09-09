/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int a, b;
    cin >> a >> b;
    if (a == b) {
        cout << 0;
    } else if (a % b == 0 || b % a == 0) {
        cout << 1;
    } else {
        cout << 2;
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