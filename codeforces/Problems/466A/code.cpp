/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m, a, b;
    cin >> n >> m >> a >> b;
    if (b / m >= a) {
        cout << n * a << '\n';
        return;
    }
    if (n <= m && n * a > b) {
        cout << b << '\n';
        return;
    }
    int ans = n / m * b;
    if (n % m != 0 && (n % m) * a <= b) {
        ans += n % m * a;
    } else if (n % m != 0) {
        ans += b;
    } 
    cout << ans << '\n';

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