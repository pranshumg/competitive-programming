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
        int a, x, y;
        cin >> a >> x >> y;
        if (x > y) {
            swap(x, y);
        }
        bool flag = false;
        for (int i = x; i <= y; i++) {
            if (i - x < abs(a - x) && abs(i - y) < abs(a - y)) {
                cout << "YES\n";
                flag = true;
                break;
            }
        }
        if (!flag) {
            cout << "NO\n";
        }
    }    
    return 0;
}
