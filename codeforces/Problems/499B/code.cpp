/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    for (int i = 0; i < m; i++) {
        string a, b;
        cin >> a >> b;
        mp[a] = ((int)a.size() > (int)b.size() ? b : a);
    }
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        cout << mp[s] << ' ';
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