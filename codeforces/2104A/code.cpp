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
        int a, b, c;
        cin >> a >> b >> c;
        if ((a + b + c) % 3 == 0 && (a + b + c) / 3 >= a && (a + b + c) / 3 >= b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }  
    return 0;
}
