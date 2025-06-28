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
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'H' || s[i] == 'Q' || s[i] == '9') {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}