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
        int a, b, n;
        cin >> a >> b >> n;
        int count = 0;
        while (a <= n && b <= n) {
            if (a < b) {
                a += b;
            } else {
                b += a;
            }
            count++;
        }
        cout << count << '\n';
    }
    return 0;
}