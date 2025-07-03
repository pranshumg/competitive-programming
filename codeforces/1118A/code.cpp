/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int q;
    cin >> q;
    while (q--) {
        long long n;
        int a, b;
        cin >> n >> a >> b;
        cout << (n / 2) * min(2 * a, b) + (n % 2) * a << '\n'; 
    } 
    return 0;
}
