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
    int l, r, l_o = 0, l_c = 0, r_o = 0, r_c = 0;
    while (n--) {
        cin >> l >> r;
        if (l == 1) {
            l_o++;
        } else {
            l_c++;
        }
        if (r == 1) {
            r_o++;
        } else {
            r_c++;
        }
    }
    cout << min(l_o, l_c) + min(r_o, r_c);
    return 0;
}