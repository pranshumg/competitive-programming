/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n;
    cin >> n;
    int d = 1;
    for (int i = 0; i < n / 2; i++) {
        for (int j = n / 2; j > i; j--) {
            cout << '*';
        }
        for (int j = 0; j < d; j++) {
            cout << 'D';
        }
        for (int j = n / 2; j > i; j--) {
            cout << '*';
        }
        d += 2;
        cout << '\n';
    }
    for (int i = 0; i < d; i++) {
        cout << 'D';
    }
    d -= 2;
    cout << '\n';
    for (int i = 0; i < n / 2; i++) {
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        for (int j = d; j > 0; j--) {
            cout << 'D';
        }
        for (int j = 0; j <= i; j++) {
            cout << '*';
        }
        d -= 2;
        cout << '\n';
    }
    return 0;
}