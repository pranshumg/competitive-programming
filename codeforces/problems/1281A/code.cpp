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
        if (s[s.size() - 1] == 'u') {
            cout << "JAPANESE\n";
        } else if (s[s.size() - 1] == 'o') {
            cout << "FILIPINO\n";
        } else {
            cout << "KOREAN\n";
        }
    }
    return 0;
}