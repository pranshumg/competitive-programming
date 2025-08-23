/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int ceil_div(int a, int b) {
    return ((a + b - 1) / b);
}

void run_case() {
    int n, m, k;
    cin >> n >> m >> k;
    if (n / k >= m) {
        cout << m << '\n';
        return;
    }
    cout << (n / k) - ceil_div(m - (n / k), k - 1) << '\n';
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