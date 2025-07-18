/**
 *   author: pranshumg
**/
#include <bits/stdc++.h> 

using namespace std;

bool is_prime(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {    
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m; i++) {
        if (is_prime(i) ) {
            if (i == m) {
                cout << "YES";
            } else {
                cout << "NO";
            }
            return 0;
        }
    }
    cout << "NO";
    return 0;
}