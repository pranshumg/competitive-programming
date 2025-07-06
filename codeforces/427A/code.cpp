/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int curr, c = 0, r = 0;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr == -1) {
            c += curr;
            if (r > 0) {
                c += 1;
                r -= 1;
            }
        } else {
            r += curr;
        }
    }
    cout << abs(c);
    return 0;
}