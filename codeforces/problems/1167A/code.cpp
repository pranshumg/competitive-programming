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
        size_t pos = s.find('8');
        if (pos == string::npos || n - pos < 11) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}