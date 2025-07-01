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
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] == 'p')
                cout << 'q';
            else if (s[i] == 'q')
                cout << 'p';
            else
                cout << 'w';
        }
        cout << '\n';
    }
    return 0;
}