/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, L, R;
    cin >> n >> L >> R;
    int ans = 0;
    while (n--) {   
        int l, r;
        cin >> l >> r;
        if (l <= L && r >= R) {
            ans += 1;
        }
    }
    cout << ans << '\n';
    return 0;
}