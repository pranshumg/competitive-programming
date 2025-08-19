/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    if (n > m) {
        swap(n, m);
    }
    if (n % 2 == 0) {
        cout << "Malvika";
    } else {
        cout << "Akshat";
    }
    return 0;
}