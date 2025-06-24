/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;

    while (t--) {
        char arr[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> arr[i][j];
            }
        }
        int ans = 0;
        for (int i = 0, j = 9, k = 0; k < 10; k++) {
            if (arr[i][k] == 'X') ans += 1;
            if (arr[j][k] == 'X') ans += 1;
        }
        for (int i = 0, j = 9, k = 1; k < 9; k++) {
            if (arr[k][i] == 'X') ans += 1;
            if (arr[k][j] == 'X') ans += 1;
        }
        for (int i = 1, j = 8, k = 1; k < 9; k++) {
            if (arr[i][k] == 'X') ans += 2;
            if (arr[j][k] == 'X') ans += 2;
        }
        for (int i = 1, j = 8, k = 2; k < 8; k++) {
            if (arr[k][i] == 'X') ans += 2;
            if (arr[k][j] == 'X') ans += 2;
        }
        for (int i = 2, j = 7, k = 2; k < 8; k++) {
            if (arr[i][k] == 'X') ans += 3;
            if (arr[j][k] == 'X') ans += 3;
        }
        for (int i = 2, j = 7, k = 3; k < 7; k++) {
            if (arr[k][i] == 'X') ans += 3;
            if (arr[k][j] == 'X') ans += 3;
        }
        for (int i = 3, j = 6, k = 3; k < 7; k++) {
            if (arr[i][k] == 'X') ans += 4;
            if (arr[j][k] == 'X') ans += 4;
        }
        for (int i = 3, j = 6, k = 4; k < 6; k++) {
            if (arr[k][i] == 'X') ans += 4;
            if (arr[k][j] == 'X') ans += 4;
        }
        for (int i = 4, j = 5, k = 4; k < 6; k++) {
            if (arr[i][k] == 'X') ans += 5;
            if (arr[j][k] == 'X') ans += 5;
        }
        cout << ans << '\n';
    }
    return 0;
}
