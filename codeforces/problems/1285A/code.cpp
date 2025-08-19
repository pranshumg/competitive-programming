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
    int L = 0, R = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'L') {
            L++;
        } else {
            R++;
        }
    }
    cout << L + R + 1 << '\n';
    return 0;
}