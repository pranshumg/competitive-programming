    /**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin >> k;
    vector<int> v(12);
    for (int i = 0; i < 12; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end(), greater<int>());
    int ans = 0;
    for (int i = 0; i < 12 && k > 0; i++) {
        k -= v[i];
        ans++;
    }
    if (k > 0) {
        cout << -1;
    } else {
        cout << ans;
    }
    return 0;
}