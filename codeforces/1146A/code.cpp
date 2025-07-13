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
    int a = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'a') {
            a++;
        }
    }
    if (a > s.size() / 2) {
        cout << s.size();
    } else {
        cout << a + (a - 1);
    }
    return 0;
}