/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int sum = 0;
        while (n > 0) {
            int d = n % 10;
            sum += d;
            n /= 10;
        }
        cout << sum << '\n';
    }
    return 0;
}