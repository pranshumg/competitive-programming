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
        map<int, int> mp;
        int curr;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            mp[curr]++;
        }
        int ans = 0;
        for (auto it: mp) {
            if (it.second >= 2) {
                ans += it.second / 2;
            }
        }
        cout << ans << '\n';
    }  
    return 0;
}
