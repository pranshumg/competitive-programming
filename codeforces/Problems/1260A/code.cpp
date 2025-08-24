/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int c, sum;
    cin >> c >> sum;
    if (c >= sum) {
        cout << sum << '\n';
        return;
    }
    cout << (int64_t)(((sum % c) * pow((sum / c) + 1, 2)) + ((c - sum % c) * pow(sum / c, 2))) << '\n';
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