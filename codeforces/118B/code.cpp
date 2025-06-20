/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i, j, k, l;
    for (i = 0; i < n; i++) {
        for (j = 0; j < n - i; j++) {
            cout << "  ";
        }
        for (k = 0; k <= i; k++) {
            if (i == 0) {
                cout << k;
            } else {
                cout << k << " ";
            }
        }
        for (l = k - 2; l >= 0; l--) {
            cout << l;
            if (l != 0) {
                cout << " ";
            }
        }
        cout << endl;
    }

    for (i = 0; i < n; i++) {
        cout << i << " ";
    }
    cout << n << " ";
    for (i = n - 1; i >= 0; i--) {
        cout << i;
        if (i != 0) {
            cout << " ";
        }
    }
    cout << endl;

    int m = n;
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++) {
            cout << "  ";
        }
        for (k = 0; k < m; k++) {
            if (i == n - 1) {
                cout << k;
            } else {
                cout << k << " ";
            }
        }
        for (l = k - 2; l >= 0; l--) {
            cout << l;
            if (l != 0) {
                cout << " ";
            }
        }
        m -= 1;
        cout << endl;
    }

    return 0;
}