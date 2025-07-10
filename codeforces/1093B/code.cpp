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
        string s, r;
        cin >> s;
        sort(s.begin(), s.end());
        r = s;
        reverse(r.begin(), r.end());
        if (s == r) {
            cout << -1 << '\n';
        } else {
            cout << s << '\n';
        }
    }
    return 0;
}