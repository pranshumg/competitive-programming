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
        sort(v.begin(), v.end());
        int i = 0, j = n - 1, ans = 0;
        while (i < j) {
            if (v[i] + v[j] == k) {
                ans++, i++, j--;
            } else if (v[i] + v[j] > k) {
                j--;
            } else {
                i++;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}