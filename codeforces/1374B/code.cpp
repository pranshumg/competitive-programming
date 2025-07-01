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
        int n;
        cin >> n;
        int ans = 0;
        while (n > 1) {
            if (n % 6 == 0) {
                n /= 6;
                ans++;
            }
            else if (n % 3 == 0) {
                n *= 2;
                ans++;
            }
            else {
                ans = -1;
                break;
            }
        }
        cout << ans << '\n';
    }
    return 0;
}