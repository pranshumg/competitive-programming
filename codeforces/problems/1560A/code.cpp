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
        int k;
        cin >> k;
        int i = 0, ans = 0;
        while (i < k) {
            ans++;
            if (ans % 3 != 0 && ans % 10 != 3) i++;
        }
        cout << ans << '\n';
    }
    return 0;
}