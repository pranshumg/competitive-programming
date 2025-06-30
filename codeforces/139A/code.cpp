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
    vector<int> vec(7);
    for (int i = 0; i < 7; i++) {
        cin >> vec[i];
    }
    int sum = 0, day = 0, ans;
    while (sum != n) {
        sum += vec[day];
        if (sum >= n) {
            ans = day + 1;
            break;
        }
        day++;
        if (day > 6) {
            day = 0;
        }
    }
    cout << ans << '\n';
    return 0;
}