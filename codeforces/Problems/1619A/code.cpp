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
        if (s.size() % 2 != 0) cout << "NO\n";
        else {
            string s1 = s.substr(0, s.size() / 2), s2 = s.substr(s.size() / 2, s.size());
            if (s1 == s2) cout << "YES\n";
            else cout << "NO\n";
        }
    } 
    return 0;
}