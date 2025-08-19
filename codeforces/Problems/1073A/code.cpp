/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    string s, ans = "";
    cin >> s;
    bool flag = false;
    unordered_map<char, int> mp;
    for (int i = 0; i < n; i++) {
        if (mp[s[i]] <= ans.size() / 2) {
            ans += s[i];
            if (ans.size() > 1) {
                flag = true;
                break;
            }
        } else {
            ans = s[i];
        }
        mp[s[i]]++;
    }
    if (!flag) {
        cout << "NO\n";
        return;
    }
    cout << "YES\n" << ans << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}