/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        char c = 'a';
        string s = "";
        for (int i = 0; i < n; i++) {
            if (i % b == 0) {
                c = 'a';
            }
            s += c++;
        }
        cout << s << '\n';
    }
    return 0;
}