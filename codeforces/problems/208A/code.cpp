/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, ans = "";
    cin >> s;
    int i = 0;
    while (i < (int)s.size()) {
        if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
            i += 3;
        } else {
            ans += s[i++];
            if (s[i] == 'W' && s[i + 1] == 'U' && s[i + 2] == 'B') {
                ans += ' ';
            }
        }
    }
    cout << ans;
    return 0;
}