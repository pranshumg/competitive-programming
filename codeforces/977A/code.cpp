/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int k;
    cin >> s >> k;
    int n = stoi(s);
    while (k--) {
        if (s[s.length() - 1] != '0') {
            n -= 1;
        } else {
            n /= 10;
        }
        s = to_string(n);
    }
    cout << n << '\n';
    return 0;
}