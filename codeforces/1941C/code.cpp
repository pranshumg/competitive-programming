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
        int n, ans = 0;
        cin >> n;
        string s;
        cin >> s;
        int i = 0;
        while (i < n) {
            if (s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') {
                ans++, i += 3;
            } else if (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e') {
                ans++, i += 3;
            } else {
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}