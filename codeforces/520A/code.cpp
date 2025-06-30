/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() { 
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    string s;
    cin >> s;
    bool flag = true;
    for (int i = 0; i < n; i++) s[i] = tolower(s[i]);
    for (char ch = 'a'; ch <= 'z'; ch++) {
        if (s.find(ch) == string::npos) {
            flag = false;
            break;
        }
    }
    if (flag) cout << "YES";
    else cout << "NO";
    return 0;
}