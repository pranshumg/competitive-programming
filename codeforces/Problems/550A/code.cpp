/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    int i = 0;
    vector<pair<int, int>> AB, BA;
    while (i < (int)s.size() - 1) {
        if (s[i] == 'A' && s[i + 1] == 'B') {
            AB.emplace_back(i, i + 1);
        } else if (s[i] == 'B' && s[i + 1] == 'A') {
            BA.emplace_back(i, i + 1);
        } 
        i++;
    }
    if (AB.empty() || BA.empty()) {
        cout << "NO\n";
        return;
    }
    if ((AB[0].second < BA[(int)BA.size() - 1].first) || (BA[0].second < AB[(int)AB.size() - 1].first)) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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