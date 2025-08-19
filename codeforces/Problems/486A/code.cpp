/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n;
    cin >> n;
    if (n % 2 != 0) cout << (n / 2) * (n / 2 + 1) + -((n / 2 + 1) * (n / 2 + 1)); 
    else cout << (n / 2) * (n / 2 + 1) + -((n / 2) * (n / 2)); 
    return 0;
}