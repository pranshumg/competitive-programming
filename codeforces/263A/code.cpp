/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[5][5], row = 5, col = 5;
    for (int i = 0; i < row; i++) {
        cin >> arr[i][0] >> arr[i][1] >> arr[i][2] >> arr[i][3] >> arr[i][4];
    }
    int x, y;
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (arr[i][j] == 1) {
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