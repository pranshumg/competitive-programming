/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int func(int p, int t) {
    return max(3 * p / 10, p - (p / 250) * t);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (func(a, c) > func(b, d)) {
        cout << "Misha";
    } else if (func(a, c) < func(b, d)) {
        cout << "Vasya";
    } else {
        cout << "Tie";
    }
    return 0;
}