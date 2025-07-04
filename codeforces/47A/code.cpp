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
    int sum = 0;
    bool flag = false;
    for (int i = 1; sum <= n; i++) {
        sum += i;
        if (sum == n) {
            flag = true;
            cout << "YES";
        }
    }
    if (!flag) {
        cout << "NO";
    }
    return 0;
}
