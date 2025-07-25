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
        vector<int> v1(n), v2(n);
        for (int i = 0; i < 2 * n; i++) {
            if (i < n) {
                cin >> v1[i];
            } else {
                cin >> v2[i - n];
            }
        }
        sort(v1.begin(), v1.end());
        sort(v2.begin(), v2.end(), greater<int>());
        int i = 0;
        while (k > 0 && i < n) {
            if (v1[i] < v2[i]) {
                swap(v1[i], v2[i]);
                k--;
            }
            i++;
        }
        int ans = accumulate(v1.begin(), v1.end(), 0);
        cout << ans << '\n';
    }
    return 0;
}