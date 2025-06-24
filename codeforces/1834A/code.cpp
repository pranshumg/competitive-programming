/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() { 
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> vec(n);
        int sum = 0, prod = 1;
        for (int i = 0; i < n; i++) {
            cin >> vec[i];
            sum += vec[i];
            prod *= vec[i];
        } 
        int ans = 0;
        if (sum >= 0 && prod == -1) ans += 1;
        else if (sum < 0) {
            for (int i = 0; i < n; i++) {
                if (sum < 0 || prod == -1) {
                    if (vec[i] == -1) {
                        sum += 2;
                        prod *= -1;
                        ans += 1;
                    }
                } else break;
            }
        } 
        cout << ans << '\n';
    }

    return 0;
}
