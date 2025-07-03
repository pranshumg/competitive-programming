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
        if ((n & (n - 1)) == 0) {
            cout << "NO\n";
        } else {
            cout << "YES\n";
        }
    }
    return 0;
}
