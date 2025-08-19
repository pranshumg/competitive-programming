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
        int ans = 0;
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < n; j++) {
                if (i + j == n)
                    ans++;
                if (i + j > n)
                    break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}