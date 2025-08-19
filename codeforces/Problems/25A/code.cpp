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
    int curr, odd = 0, even = 0, idx_o, idx_e;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        if (curr % 2 == 0) {
            even++;
            idx_e = i + 1;
        } else {
            odd++;
            idx_o = i + 1;
        }
    }
    if (even > odd) {
        cout << idx_o;
    } else {
        cout << idx_e;
    }
    return 0;
}
