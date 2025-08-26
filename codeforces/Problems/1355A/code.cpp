/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

int64_t ANS(int64_t a, int64_t i, int64_t k) {
    string s = to_string(a);
    sort(s.begin(), s.end());
    int mini = s[0] - '0', maxi = s[(int)s.size() - 1] - '0';
    if (i == k || mini == 0) {
        return (a + (mini * maxi));
    } 
    return ANS(a + (mini * maxi), i + 1, k);
}

void run_case() {
    int64_t a, k;
    cin >> a >> k;
    if (k == 1) {
        cout << a << '\n';
        return;
    }
    cout << ANS(a, 2, k) << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int tests;
    cin >> tests;
    while (tests--) {
        run_case();
    }
    return 0;
}