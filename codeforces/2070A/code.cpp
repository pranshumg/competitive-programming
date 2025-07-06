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
        int n;
        cin >> n;
        int ans = 3 * (n / 15);
        n %= 15;
        for (int i = 0; i <= n; i++) {
            if (i % 3 == i % 5) {
                ans++;
            }
        }
        cout << ans << '\n';
    }  
    return 0;
}
