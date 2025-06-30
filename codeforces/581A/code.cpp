/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int a, b;
    cin >> a >> b;
    if (a < b) swap(a, b);
    cout << b << " ";
    int d = a - b;
    cout << d / 2;
    return 0;
}