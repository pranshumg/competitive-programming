/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int y, w;
    cin >> y >> w;
    if (y < w) swap(y, w);
    int den = 6;
    int num = den - y + 1;
    for (int i = 1; i <= num; i++) {
        if (den % i == 0 && num % i == 0) {
            den /= i;
            num /= i;
        }
    }
    cout << num << "/" << den;
    return 0;
}