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
        int n;
        cin >> n;
        if ((n + 1) % 3 == 0 || (n - 1) % 3 == 0) cout << "First" << '\n';
        else cout << "Second" << '\n';
    }
    return 0;
}
