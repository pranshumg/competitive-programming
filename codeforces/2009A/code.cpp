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
        int ans = (a - a) + (b - a);
        for (int i = a + 1; i <= b; i++) {
            if ((i - a) + (b - i) < ans) ans = (i - a) + (b - i);
        }
        cout << ans << '\n';
    }
    return 0;
}