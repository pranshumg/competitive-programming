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
    if (n > 0) {
        cout << n;
    } else {
        int ans = INT_MIN;
        string s = to_string(n);
        for (int i = (int)s.size() - 1; i > (int)s.size() - 3; i--) {
            s.erase(i, 1);
            int a = stoi(s);
            ans = max(ans, a);
            s = to_string(n);
        }
        cout << ans;
    }

    return 0;
}