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
        vector<int> v(n);
        int ans = 0;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            if (i % 2 == 0) {
                ans += v[i];
            } else {
                ans += -(v[i]);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
