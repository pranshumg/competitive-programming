/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int64_t n;
    cin >> n;
    int64_t mini, maxi;
    if (n % 2 == 0 && n >= 4) {
        if (n % 6 == 0) {
            mini = n / 6;
        } else {
            mini = (n / 6) + 1;
        }
        if (n % 4 == 0 || n % 4 == 2) {
            maxi = n / 4;
        } 
    } else {
        cout << -1 << '\n';
        return;
    }
    cout << mini << ' ' << maxi << '\n';
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