/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    int ans = a;
    while (a >= b) {
        ans += a / b;
        a = a / b + a % b;
    }
    cout << ans;
    return 0;
}