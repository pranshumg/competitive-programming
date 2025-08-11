/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int el = (a + b + c + n) / 3;
        if (((el - a) + (el - b) + (el - c) == n) && el >= a && el >= b && el >= c) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}