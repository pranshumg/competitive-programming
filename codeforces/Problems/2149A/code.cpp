/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n;
    cin >> n;
    int neg = 0, zero = 0;
    for (int i = 0; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr < 0) {
            neg++;
        } else if (curr == 0) {
            zero++;
        }
    }
    if (neg % 2 != 0) {
        zero += 2;
    }
    cout << zero << '\n';

}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}