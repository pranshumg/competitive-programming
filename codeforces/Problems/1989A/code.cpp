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
    while (n--) {
        int x, y;
        cin >> x >> y;
        if (0 - y >= 2) {
            cout << "NO\n";;
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}