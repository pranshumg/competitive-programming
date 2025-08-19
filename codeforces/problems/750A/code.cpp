/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, k;
    cin >> n >> k;
    int tl = 240 - k;
    int ans = 0;
    for (int i = 1; i <= n; i++) {
        tl -= 5 * i;
        if (tl >= 0) ans++;
    }
    cout << ans;
    return 0;
}