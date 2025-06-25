/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int ans = 0;
    while (n--) {
        string s;
        cin >> s;
        if (s[0] == 'T') {
            ans += 4;
        } else if (s[0] == 'C') {
            ans += 6;
        } else if (s[0] == 'O') {
            ans += 8;
        } else if (s[0] == 'D') {
            ans += 12;
        } else {
            ans += 20;
        }
    }
    cout << ans << '\n';
    return 0;
}