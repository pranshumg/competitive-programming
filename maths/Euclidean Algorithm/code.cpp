#include <bits/stdc++.h>
using namespace std;

int func(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) n1 %= n2;
        else n2 %= n1;
    }
    if (n1 == 0) return n2;
    return n1;
}

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int ans = func(n1, n2);
    cout << ans << endl;
    return 0;
}