/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, t;
    cin >> n >> t;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int ans = 1;
    for (int i = 0; i < n; i++) {
        t -= (86400 - v[i]);
        if (t <= 0) {
            break;
        } else {
            ans++;
        }
    }
    cout << ans;
    return 0;
}
