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
    int sum, ans = 0;
    while (s.size() != 1) {
        sum = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            sum += s[i] - '0';
        }
        ans++;
        s = to_string(sum);
    }
    cout << ans;
    return 0;
}