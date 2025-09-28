/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s, ans = "";
    cin >> s;
    int B = 0, b = 0;
    for (int i = (int)s.size() - 1; i >= 0; i--) {
        if (s[i] >= 'a' && s[i] <= 'z' && s[i] != 'b') {
            if (b == 0) {
                ans += s[i];
            } else {
                b--;
            }
        }
        if (s[i] >= 'A' && s[i] <= 'Z' && s[i] != 'B') {
            if (B == 0) {
                ans += s[i];
            } else {
                B--;
            }
        }
        if (s[i] == 'b') {
            b++;
        }
        if (s[i] == 'B') {
            B++;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}