/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    for (int i = n; i > 0; i--) {
        cout << i << ' ';
    }
    cout << n << ' ';
    for (int i = 1; i < n; i++) {
        cout << i << ' ';
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