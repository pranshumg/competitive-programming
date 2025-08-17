/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    int i = 0, j = 0, ans = 0;
    while (true) {
        bool flag = false;
        for (int k = j; k < (int)s.size(); k++) {
            if (s[k] == '1') {
                i = k;
                break;
            }
        }
        for (int k = i + 1; k < (int)s.size(); k++) {
            if (s[k] == '1') {
                j = k;
                flag = true;
                break;
            }
        }
        if (!flag) {
            break;
        }
        ans += (j - i - 1);
    }
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