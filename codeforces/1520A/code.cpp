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
        int n;
        cin >> n;
        string s, temp = "";
        cin >> s;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (temp.find(s[i]) == string::npos) {
                temp += s[i];
            } else {
                if (s[i - 1] != s[i]) {
                    cout << "NO\n";
                    flag = false;
                    break;
                }
            }
        }
        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}