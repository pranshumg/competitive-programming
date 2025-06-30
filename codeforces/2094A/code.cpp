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
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        cout << s[0];
        for (int i = 1; i < s.size(); i++) {
            if (s[i] == ' ')
                cout << s[i + 1];
        } 
        cout << '\n';
    }
    return 0;
}