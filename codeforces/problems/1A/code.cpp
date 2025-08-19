/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int64_t n, m, a;
    cin >> n >> m >> a;
    cout << ((m + a - 1) / a) * ((n + a - 1) / a);
    return 0;
}