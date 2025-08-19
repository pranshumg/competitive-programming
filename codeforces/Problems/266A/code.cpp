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
    int c = s[0], ans = 0;
    for (int i = 0; i < n - 1; i++) {
        if (c == s[i + 1]) ans++;
        else c = s[i + 1];
    }
    cout << ans;
    return 0;
}