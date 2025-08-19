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
        int w, h, n;
        cin >> w >> h >> n;
        int sheets = 1;
        while (w % 2 == 0) {
            sheets *= 2;
            w /= 2;
        }
        while (h % 2 == 0) {
            sheets *= 2;
            h /= 2;
        }
        if (sheets >= n) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
    return 0;
}