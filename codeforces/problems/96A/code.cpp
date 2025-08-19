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
    char c = s[0];
    int cnt = 1, ans = 1;
    for (int i = 1; i < s.size(); i++) {
        if (c == s[i]) {
            cnt++;
        } else {
            c = s[i];
            cnt = 1;
        }
        ans = max(ans, cnt);
    }
    if (ans >= 7) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}