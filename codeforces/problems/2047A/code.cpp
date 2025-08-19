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
        for (int i = 0; i < n; i++)
            cin >> v[i];
        int ans = 1, nop = 1, day = 1, sum = 1;
        for (int i = 1; i < n; i++) {
            sum += v[i];
            while (nop < sum)
                nop += 8 * day++;
            if (nop == sum)
                ans++;
        }
        cout << ans << '\n';
    }
    return 0;
}