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
        if (s.size() == 3) {
            if (s.substr(0, 2) == "10" && s[2] > '1') {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (s.size() >= 4) {
            if (s.substr(0, 2) == "10" && s[2] >= '1') {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}