/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int n;
    cin >> n;
    if (n == 1) {
        cout << "I hate it";
        return 0;
    }
    for (int i = 1; i <= n - 1; i++) {
        if (i % 2 != 0) cout << "I hate that ";
        else cout << "I love that ";
    }
    if (n % 2 != 0) cout << "I hate it";
    else cout << "I love it";
    return 0;
}