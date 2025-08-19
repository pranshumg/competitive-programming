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
        int64_t n;
        cin >> n;
        int64_t power = 1, ans = 0;
        while (power * 10 <= n) {
            ans += 9;
            power *= 10;
        }
        ans += n / power;
        cout << ans << '\n';
    }
    return 0;
}
