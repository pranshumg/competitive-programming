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
        char curr;
        for (int i = 0; i < 8; i++) {
            for(int j = 0; j < 8; j++) {
                cin >> curr;
                if (curr != '.') {
                    cout << curr;
                }
            }
        }
        cout << '\n';
    }
    return 0;
}
