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
        char c = '9';
        for (int i = 0; i < s.size(); i++) {
            if (s[i] < c) {
                c = s[i];
            }
        }
        cout << c << '\n';
    }
    return 0;
}