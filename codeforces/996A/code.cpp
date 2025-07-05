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
    if (n / 100 >= 0) {
        ans += n / 100;
        n %= 100;
    }
    if (n / 20 >= 0) {
        ans += n / 20;
        n %= 20;
    }
    if (n / 10 >= 0) {
        ans += n / 10;
        n %= 10;
    }
    if (n / 5 >= 0) {
        ans += n / 5;
        n %= 5;
    }
    if (n / 1 >= 0) {
        ans += n / 1;
        n %= 1;
    }
    cout << ans;
    return 0;
}
