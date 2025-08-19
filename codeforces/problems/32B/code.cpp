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
    string ans = "";
    int i = 0;
    while (i < s.size()) {
        if (s[i] == '.') {
            ans += '0';
            i++;
        } else if (s[i] == '-' && s[i + 1] == '.') {
            ans += '1';
            i += 2;
        } else if (s[i] == '-' || s[i + 1] == '-') {
            ans += '2';
            i += 2;
        }
    }
    cout << ans;
    return 0;
}