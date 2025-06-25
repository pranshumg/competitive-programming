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
    while (n--) {
        string s;
        cin >> s;
        for (int i = 0; i < s.length() - 2; i++) {
            cout << s[i];
        }
        cout << 'i' << '\n';
    }
    return 0;
}