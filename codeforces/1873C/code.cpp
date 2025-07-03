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
        char a[10][10];
        for (int i = 0; i < 10; i++) {
            for (int j = 0; j < 10; j++) {
                cin >> a[i][j];
            }
        }
        int ans = 0;
        for (int i = 0, j = 9, k = 0; k < 10; k++) {
            if (a[i][k] == 'X') ans += 1;
            if (a[j][k] == 'X') ans += 1;
        }
        for (int i = 0, j = 9, k = 1; k < 9; k++) {
            if (a[k][i] == 'X') ans += 1;
            if (a[k][j] == 'X') ans += 1;
        }
        for (int i = 1, j = 8, k = 1; k < 9; k++) {
            if (a[i][k] == 'X') ans += 2;
            if (a[j][k] == 'X') ans += 2;
        }
        for (int i = 1, j = 8, k = 2; k < 8; k++) {
            if (a[k][i] == 'X') ans += 2;
            if (a[k][j] == 'X') ans += 2;
        }
        for (int i = 2, j = 7, k = 2; k < 8; k++) {
            if (a[i][k] == 'X') ans += 3;
            if (a[j][k] == 'X') ans += 3;
        }
        for (int i = 2, j = 7, k = 3; k < 7; k++) {
            if (a[k][i] == 'X') ans += 3;
            if (a[k][j] == 'X') ans += 3;
        }
        for (int i = 3, j = 6, k = 3; k < 7; k++) {
            if (a[i][k] == 'X') ans += 4;
            if (a[j][k] == 'X') ans += 4;
        }
        for (int i = 3, j = 6, k = 4; k < 6; k++) {
            if (a[k][i] == 'X') ans += 4;
            if (a[k][j] == 'X') ans += 4;
        }
        for (int i = 4, j = 5, k = 4; k < 6; k++) {
            if (a[i][k] == 'X') ans += 5;
            if (a[j][k] == 'X') ans += 5;
        }
        cout << ans << '\n';
    }
    return 0;
}
