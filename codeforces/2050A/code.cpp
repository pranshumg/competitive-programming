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
        int n, m;
        cin >> n >> m;
        vector<string> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i].size();
            ans++;
            if (sum > m) {
                ans--;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}