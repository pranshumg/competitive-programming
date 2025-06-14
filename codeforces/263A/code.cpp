#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    
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
 
    int steps = 0;
 
    while (x != 2) {
        if (x > 2) {
            swap(arr[x][y], arr[x - 1][y]);
            x--;
            steps++;
        } else {
            swap(arr[x][y], arr[x + 1][y]);
            x++;
            steps++;
        }         
    }
 
    while (y != 2) {
        if (y > 2) {
            swap(arr[x][y], arr[x][y - 1]);
            y--;
            steps++;
        } else {
            swap(arr[x][y], arr[x][y + 1]);
            y++;
            steps++;
        } 
    }
 
    cout << steps << endl;
 
    return 0;
}