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
    int ans = 0;
    for (int i = 0; i < s.size() - 2; i++) {
        if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
