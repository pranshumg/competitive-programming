/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int sum = 0;
    for (int i = 0; i < 5; i++) {
        int curr;
        cin >> curr;
        sum += curr; 
    }
    cout << (sum % 5 == 0 && sum / 5 > 0 ? sum / 5 : -1);
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    // int tests;
    // cin >> tests;
    // while (tests--) {
        run_case();
    // }
    return 0;
}