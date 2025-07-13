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
        int b, p, f;
        cin >> b >> p >> f;
        int h, c;
        cin >> h >> c;
        int ans = 0, two_buns = b / 2;
        if (h < c) {
            if (two_buns > f) {
                ans += (c * f);
                two_buns -= f;
                if (two_buns > p) {
                    ans += (h * p);
                    two_buns -= p;
                } else {
                    ans += (h * two_buns);
                }
            } else {
                ans += (c * two_buns);
            }
        } else {
            if (two_buns > p) {
                ans += (h * p);
                two_buns -= p;
                if (two_buns > f) {
                    ans += (c * f);
                    two_buns -= f;
                } else {
                    ans += (c * two_buns);
                }
            } else {
                ans += (h * two_buns);
            }
        }
        cout << ans << '\n';
    }
    return 0;
}
