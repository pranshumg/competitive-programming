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
        int cnt = 0, max_dots = INT_MIN;
        for (int i = 0; i < n; i++) {
            if (s[i] == '.') {
                cnt++;
            } else {
                cnt = 0;
            }
            max_dots = max(max_dots, cnt);
        }
        int dots = count(s.begin(), s.end(), '.');
        if (max_dots >= 3) {
            cout << 2 << '\n';
        } else {
            cout << dots << '\n';
        }
    }
    return 0;
}