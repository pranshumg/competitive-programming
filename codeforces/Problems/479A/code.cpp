/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c;
    cin >> a >> b >> c;
    if (a == 1 && c == 1) {
        cout << a + b + c;
    } else if (a == 1) {
        cout << (a + b) * c; 
    } else if (c == 1) {
        cout << a * (b + c);
    } else if (b == 1) {
        if (a > c) {
            cout << a * (b + c);
        } else {
            cout << (a + b) * c;
        }
    } else {
        cout << a * b * c;
    }
    return 0;
}