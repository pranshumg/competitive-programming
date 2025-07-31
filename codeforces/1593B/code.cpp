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
        vector<string> v = {"00", "25", "50", "75"};
        int ans = INT_MAX;
        for (auto end: v) {
            for (int i = (int)s.size() - 1; i > 0; i--) {
                if (s[i] == end[1]) {
                    for (int j = i - 1; j >= 0; j--) {
                        if (s[j] == end[0]) {
                            int ds = (int)s.size() - j - 2;
                            ans = min(ans, ds);
                            break;
                        }
                    }
                    break;
                }
            }
            if (ans == 0) {
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}