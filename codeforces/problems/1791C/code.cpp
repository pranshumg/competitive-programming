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
        string s;
        cin >> s;
        while (n > 0) {
            if (s[0] != s[n - 1]) {
                s = s.substr(1, n - 2);
                n = s.size();
            } else {
                cout << n << '\n';
                break;
            }
        } 
        if (n == 0) cout << 0 << '\n';
    } 
    return 0;
}