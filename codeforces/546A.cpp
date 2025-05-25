#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, n, w;
    cin >> k >> n >> w;

    int total_price = 0;
    for (int i = 1; i <= w; i++) {
        total_price += i * k;
    }

    int ans;
    if (total_price > n) {
        ans = total_price - n;
    } else {
        total_price = ans;
    }

    cout << ans << endl;
    
    return 0;
}