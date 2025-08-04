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
        int one = 0, zero = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            if (s[i] == '1') {
                one++;
            } else {
                zero++;
            }
        }
        int mini = min(one, zero);
        if (mini % 2 == 0) {
            cout << "NET\n";
        } else {
            cout << "DA\n";
        }
    }
    return 0;
}