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
        int n, k;
        cin >> n >> k;
        vector<int> v(n);
        for (int i = 0; i < n; i++) {
            cin >> v[i];
        }
        sort(v.rbegin(), v.rend());
        int ans = 0, sum = 0;
        for (int i = 0; i < n; i++) {
            sum += v[i];
            if (sum == k) {
                break;
            }
            if (sum + v[i + 1] > k) {
                ans += k - sum;
                sum += v[i + 1];
                break;
            }
        }
        if (sum < k) {
            ans += k - sum;
        }
        cout << ans << '\n';
    }
    return 0;
}