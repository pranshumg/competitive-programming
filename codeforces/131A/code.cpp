/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s;
    cin >> s;
    int flag = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == toupper(s[i])) {
            flag = 1;
        } else {
            flag = 0;
            break;
        }
    }
    if (s[0] == tolower(s[0])) {
        if (s.length() != 1) {
            for (int i = 1; i < s.length(); i++) {
                if (s[i] == toupper(s[i])) {
                    flag = 2;
                } else {
                    flag = 0;
                    break;
                }
            }
        } else {
            flag = 3;
        }       
    }
    if (flag == 0) {
        cout << s;
    } else if (flag == 1) {
        for (int i = 0; i < s.length(); i++) {
            cout << char(tolower(s[i]));
        }
    } else if (flag = 2) {
        cout << char(toupper(s[0]));
        for (int i = 1; i < s.length(); i++) {
            cout << char(tolower(s[i]));
        }
    } else {
        cout << char(toupper(s[0]));
    }
    return 0;
}