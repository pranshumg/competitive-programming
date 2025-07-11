/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    int w = 0, b = 0, n = 8;
    while (n--) {
        cin >> s;
        for (int i = 0; i < 8; i++) {
            if (s[i] == 'Q' || s[i] == 'q') {
                if (s[i] == 'Q') {
                    w += 9;
                } else {
                    b += 9;
                }
            }
            if (s[i] == 'R' || s[i] == 'r') {
                if (s[i] == 'R') {
                    w += 5;
                } else {
                    b += 5;
                }
            }
            if (s[i] == 'B' || s[i] == 'N' || s[i] == 'b' || s[i] == 'n') {
                if (s[i] == 'B' || s[i] == 'N') {
                    w += 3;
                } else {
                    b += 3;
                }
            }
            if (s[i] == 'P' || s[i] == 'p') {
                if (s[i] == 'P') {
                    w += 1;
                } else {
                    b += 1;
                }
            }
        }
    }
    if (w > b) {
        cout << "White\n";
    } else if (b > w) {
        cout << "Black\n";
    } else {
       cout << "Draw\n";
    }
    return 0;
}