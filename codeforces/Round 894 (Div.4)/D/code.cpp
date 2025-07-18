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
        int n, k;
        cin >> n >> k;
        string s;
        cin >> s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'B') {
                ans++;
                for (int j = 0; j < k && i + j < n; j++) {
                    if (s[i + j] = 'W');
                }
            }
        }
        cout << ans << '\n';
    }
    return 0;
}