/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x = 0, n;
    string op;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> op;
        if (op[2] == '+'){
            x++;
        } else if (op[0] == '+') {
            ++x;
        } else if (op[2] == '-' ) {
            x--;
        } else {
            --x;
        }
    }   
    cout << x;
    return 0;
}
