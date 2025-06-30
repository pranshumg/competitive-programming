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
        string s = "codeforces";
        char ch;
        cin >> ch;
        if (s.find(ch) == string::npos) cout << "NO" << '\n';
        else cout << "YES" << '\n';
    }
    return 0;
}