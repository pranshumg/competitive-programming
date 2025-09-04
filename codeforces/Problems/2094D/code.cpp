/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string p, s;
    cin >> p >> s;
    if ((int)p.size() > (int)s.size() || p[0] != s[0]) {
        cout << "NO\n";
        return;
    }
    vector<int> P, S;
    int i = 0, j = 0;
    while (i < (int)p.size()) {
        if (p[i] == p[j]) {
            j++;
        } else {
            P.push_back(j - i);
            i = j;
        }
    }
    i = 0, j = 0;
    while (i < (int)s.size()) {
        if (s[i] == s[j]) {
            j++;
        } else {
            S.push_back(j - i);
            i = j;
        }
    }
    if ((int)P.size() != (int)S.size()) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < (int)P.size(); i++) {
        if (P[i] > S[i] || P[i] * 2 < S[i]) {
            cout << "NO\n";
            return;
        }
    }
    cout << "YES\n";
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