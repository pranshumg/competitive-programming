/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int x = count(s.begin(), s.end(), 'x'), X = count(s.begin(), s.end(), 'X');
    int changes = ((x + X) / 2) - min(x, X);
    cout << changes << '\n';
    if (x > X) {
        for (int i = 0; i < n && changes > 0; i++) {
            if (s[i] == 'x') {
                s[i] = 'X', changes--;
            }
        }
    } else {
        for (int i = 0; i < n && changes > 0; i++) {
            if (s[i] == 'X') {
                s[i] = 'x', changes--;
            }
        }
    }
    cout << s;
    return 0;
}