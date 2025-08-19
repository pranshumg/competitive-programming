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
        string s;
        cin >> s;
        if (s[0] != 'a' && s[1] != 'b' && s[2] != 'c') cout << "NO\n";
        else cout << "YES\n";
    }
    return 0;
}