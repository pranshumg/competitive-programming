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
        int ans = 0;
        vector<int> v(3);
        for (int i = 0; i < 3; i++) {
            cin >> v[i];
            ans ^= v[i];
        }
        cout << ans << '\n';
    }
    return 0;
}