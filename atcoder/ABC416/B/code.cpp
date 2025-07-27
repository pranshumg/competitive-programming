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
    bool flag = true;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '#') {
            flag = true;
        } else if (s[i] == '.' && flag) {
            s[i] = 'o';
            flag = false;
        } 
    }
    cout << s;
    return 0;
}