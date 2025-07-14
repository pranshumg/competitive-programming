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
        int n, k;
        cin >> n >> k;
        string s = "";
        char c = 'a';
        int og_k = k;
        for (int i = 1; i <= n; i++) {
            if (k == 0) {
                k = og_k;
                c = 'a';
            }
            s += c++, k--;
        }
        cout << s << '\n';
    }
    return 0;
}