/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    char curr;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> curr;
            if (curr == 'C' || curr == 'M' || curr == 'Y') {
                cout << "#Color";
                return 0;
            }
        }
    }
    cout << "#Black&White";
    return 0;
}
