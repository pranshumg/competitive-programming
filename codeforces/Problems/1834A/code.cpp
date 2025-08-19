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
        int sum = 0, prod = 1;
        for (int i = 0; i < n; i++) {
            cin >> v[i];
            sum += v[i];
            prod *= v[i];
        } 
        int ans = 0;
        if (sum >= 0 && prod == -1) ans += 1;
        else if (sum < 0) {
            for (int i = 0; i < n; i++) {
                if (sum < 0 || prod == -1) {
                    if (v[i] == -1) {
                        sum += 2;
                        prod *= -1;
                        ans += 1;
                    }
                } else break;
            }
        } 
        cout << ans << '\n';
    }
    return 0;
}
