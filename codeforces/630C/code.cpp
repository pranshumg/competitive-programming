/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int i = 1;
    long long ans = 0;
    while (i <= n) {
        ans += pow(2, i++);
    }

    cout << ans << endl;

    return 0;
}