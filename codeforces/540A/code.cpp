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
    string s, r;
    cin >> s >> r;  
    int ans = 0;
    for (int i = 0; i < n; i++) {
        int a = s[i] - '0', b = r[i] - '0';
        if (a > b) {
            ans += min(abs(a - b), 10 - a + b);
        } else {
            ans += min(abs(a - b), 10 - b + a);
        }
    }
    cout << ans;
    return 0;
}