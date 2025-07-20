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
    int fir = -1, sec = -1, cnt = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '#') {
            cnt++;
        }
        if (cnt == 1 && s[i] == '#') {
            fir = i + 1;
            cout << fir << ',';
        } 
        if (cnt == 2 && s[i] == '#') {
            sec = i + 1;
            cout << sec << '\n';
            cnt = 0;
        }
    }
    return 0;
}