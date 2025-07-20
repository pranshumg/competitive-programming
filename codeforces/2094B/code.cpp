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
        int n, m, l, r;
        cin >> n >> m >> l >> r;
        if (r >= n - m) {
            r -= n - m;
        } else {
            l += n - m - r;
            r = 0;
        }
        cout << l << ' ' << r << '\n';
    }
    return 0;
}