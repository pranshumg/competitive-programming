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
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'A') {
                a++;
            } else if (s[i] == 'B') {
                b++;
            } else if (s[i] == 'C') {
                c++;
            } else if (s[i] == 'D') {
                d++;
            } else if (s[i] == 'E') {
                e++;
            } else if (s[i] == 'F') {
                f++;
            } else {
                g++;
            }
        }
        int ans = 0;
        if (a < m) {
            ans += m - a;
        } 
        if (b < m) {
            ans += m - b;
        } 
        if (c < m) {
            ans += m - c;
        } 
        if (d < m) {
            ans += m - d;
        }
        if (e < m) {
            ans += m - e;
        }
        if (f < m) {
            ans += m - f;
        }
        if (g < m) {
            ans += m - g;
        }
        cout << ans << '\n';
    }  
    return 0;
}
