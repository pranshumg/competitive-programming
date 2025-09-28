/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int64_t sum1 = 0, sum2 = 0, sum3 = 0;
    int curr;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        sum1 += curr;
    }
    for (int i = 0; i < n - 1; i++) {
        cin >> curr;
        sum2 += curr;
    }
    cout << sum1 - sum2 << '\n';
    for (int i = 0; i < n - 2; i++) {
        cin >> curr;
        sum3 += curr;
    }
    cout << sum2 - sum3 << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}