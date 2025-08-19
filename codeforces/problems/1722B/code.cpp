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
        string s, r;
        cin >> s >> r;
        bool flag = true;
        for (int i = 0; i < n; i++) {
            if (s[i] == 'R' && r[i] == 'R') {
                continue;
            } else if (s[i] == 'R' && r[i] != 'R') {
                cout << "NO\n";
                flag = false;
                break;
            } else if ((s[i] == 'G' || s[i] == 'B') && r[i] == 'R') {
                cout << "NO\n";
                flag = false;
                break;
            } else {
                continue;
            }
        }
        if (flag) {
            cout << "YES\n";
        }
    }
    return 0;
}
