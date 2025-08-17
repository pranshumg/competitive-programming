/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int k;
    cin >> k;
    string s;
    cin >> s;
    unordered_map<char, int> mp;
    for (int i = 0; i < (int)s.size(); i++) {
        mp[s[i]]++;
    }
    string ans = "";
    for (auto it: mp) {
        if (it.second % k != 0) {
            cout << -1;
            return;
        }
        for (int i = 0; i < it.second / k; i++) {
            ans += it.first;
        }
    }
    for (int i = 0; i < k; i++) {
        cout << ans;
    }
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