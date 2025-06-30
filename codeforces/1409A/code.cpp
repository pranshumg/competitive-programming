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
        int a, b;
        cin >> a >> b;
        if (a < b) swap(a, b);
        int ans = 0;
        if ((a - b) % 10 == 0) ans += (a - b) / 10;
        else ans += (a - b) / 10 + 1;
        cout << ans << '\n';
    }
    return 0;
}