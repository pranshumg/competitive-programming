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
        bool flag = true;
        map<char, bool> mp;
        for (char c: s) {
            if (c == 'r' || c == 'g' || c == 'b') {
                mp[c] = true;
            } else if (!mp[tolower(c)]) {
                cout << "NO\n";
                flag = false;
                break;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}
