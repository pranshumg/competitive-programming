/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string s;
    cin >> s;
    cout << (count(s.begin(), s.end(), 'N') != 1 ? "YES\n" : "NO\n");
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