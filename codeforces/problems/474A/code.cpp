/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string r = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char ch;
    cin >> ch;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++) {
        if (ch == 'R') {
            s[i] = r[r.find(s[i]) - 1];
        } else {
            s[i] = r[r.find(s[i]) + 1];
        }
    }
    cout << s;
    return 0;
}
