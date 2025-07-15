/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int x;
    cin >> x;
    if (x % 4 == 1) {
        cout << 0 << " " << 'A';
    } else if (x % 4 == 3){
        cout << 2 << " " << 'A';
    } else if (x % 4 == 2) {
        cout << 1 << " " << 'B'; 
    } else {
        cout << 1 << " " << 'A';
    }
    return 0;
}