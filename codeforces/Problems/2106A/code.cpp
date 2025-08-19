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
        string s, og_s;
        cin >> s;
        og_s = s;
        int ans = 0;
        for (int i = 0; i < n; i++) {
            s = og_s;
            if (s[i] == '1') {
                s[i] = '0';
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1')
                        ans++;
                }
            } else {
                s[i] = '1';
                for (int i = 0; i < n; i++) {
                    if (s[i] == '1')
                        ans++;
                }
            }
        }
        cout << ans << '\n';   
    }
    return 0;
}