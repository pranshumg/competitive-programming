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
        int a = stoi(s.substr(0, 1)), b = stoi(s.substr(2, 1));
        if (a < b) {
            cout << a << '<' << b << '\n';
        } else if (a > b) {
            cout << a << '>' << b << '\n';
        } else {
            cout << a << '=' << b << '\n';
        }
    }
    return 0;
}