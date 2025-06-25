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
    int ans = 0;
    if (n == 1 || n == 2 || n == 3 || n == 4 || n == 5) ans += 1;
    else {
        if (n % 5 == 0) ans += n / 5;
        else ans += n / 5 + 1;
    }
    cout << ans;
    return 0;
}