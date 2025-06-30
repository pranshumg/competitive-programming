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
        string s, r = "codeforces";
        cin >> s;
        int ans = 0;
        for (int i = 0; i < 10; i++) if (s[i] != r[i]) ans++;
        cout << ans << '\n';
    }
    return 0;
}