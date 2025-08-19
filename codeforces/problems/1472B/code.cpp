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
        int n, curr;
        cin >> n;
        int one = 0, two = 0;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr == 1) {
                one++;
            } else {
                two++;
            }
        }
        if (one == 0) {
            if (two % 2 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (two == 0) {
            if (one % 2 == 0) {
                cout << "YES\n";
            } else {
                cout << "NO\n";
            }
        } else if (one % 2 == 0) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}