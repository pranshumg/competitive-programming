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
    int cnt = 0;
    bool flag = true;
    for (int i = 0; i < (int)s.size(); i++) {
        if (s[i] == '4') {
            cnt++;
        } else {
            cnt = 0;
        }
        if (cnt > 2 || (s[i] != '1' && s[i] != '4') || s[0] != '1') {
            flag = false;
            break;
        }
    }
    if (flag) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}