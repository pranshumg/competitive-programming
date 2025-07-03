/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a[5][5], row = 5, col = 5;
    for (int i = 0; i < row; i++) {
        cin >> a[i][0] >> a[i][1] >> a[i][2] >> a[i][3] >> a[i][4];
    }
    int x, y;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (a[i][j] == 1) {
                x = i;
                y = j;
                break;
            }
        }
    }
    int steps = abs(x - 2) + abs(y - 2);
    cout << steps << '\n';
    return 0;
}