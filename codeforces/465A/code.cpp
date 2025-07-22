/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, ans = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++) {
        if (s[i] != '0') {
            ans++;
        } else {
            ans++;
            break;
        }
    }
    cout << ans;
    return 0;
}