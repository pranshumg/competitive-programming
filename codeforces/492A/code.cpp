/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int func(int n) {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int i = 1, result = 0;
    while (i <= n) {
        result += i;
        i++;
    }
    return result;
}
int main() {
    int n;
    cin >> n;
    int j = 0, ans = 0, i = 1;
    while (j <= n) {
        j += func(i);
        i++;
        ans += 1;
    }
    cout << ans - 1 << '\n';
    return 0;
}