/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    string s, r, q = "";
    cin >> s >> r;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] != r[i])
            q += '1';
        else
            q += '0';
    }
    cout << q;
    return 0;
}