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
        int64_t a, b;
        cin >> a >> b;
        int n;
        cin >> n;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        int64_t ans = b - 1, sum = 1;
        int i = 0;
        while (i < n) {
            if (sum + v[i] <= a) {
                sum += v[i];
                ans += sum - 1;
                sum = 1;
            } else {
                ans += a - 1;
                sum = 1;
            }
            i++;            
        }
        cout << ans + 1 << '\n';
    }
    return 0;
}