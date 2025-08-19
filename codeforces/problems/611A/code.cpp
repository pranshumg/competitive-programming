/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    string s, r;
    cin >> n >> s >> r;
    if (r == "week") {
        if (n == 5 || n == 6) {
            cout << 53;
        } else {
            cout << 52;
        }
    } else {
        if (n == 31) {
            cout << 7;
        } else if (n == 30) {
            cout << 11;
        } else {
            cout << 12;
        }
    }
    return 0;
}