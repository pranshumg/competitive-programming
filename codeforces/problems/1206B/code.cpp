/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int64_t ans = 0;
    int zero = 0, neg = 0; 
    for (int i = 0; i < n; i++) {
        if (v[i] > 0) {
            ans += v[i] - 1;
        } else if (v[i] < 0) {
            ans += -1 - v[i], neg++;
        } else {
            ans++, zero++;
        }
    }
    if (zero == 0 && neg % 2 != 0) {
        ans += 2;
    }
    cout << ans << '\n';
    return 0;
}