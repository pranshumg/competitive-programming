/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, l, r;
    cin >> n >> l >> r;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = l - 1; i < r; i++) {
        if (s[i] != 'o') {
            flag = false;
            break;
        }
    }  
    if (flag) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 0;
}