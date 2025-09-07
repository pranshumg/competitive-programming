/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    int n, m;
    cin >> n >> m;
    vector<int> tz;
    int sum = 0;
    for (int i = 0; i < n; i++) {
        int curr; 
        cin >> curr;
        string s = to_string(curr);
        sum += (int)s.size();
        int cnt = 0;
        for (int j = (int)s.size() - 1; j >= 0; j--) {
            if (s[j] == '0') {
                cnt++;
            } else {
                break;
            }
        }
        if (cnt > 0) {
            tz.push_back(cnt);
        }
    }
    if (!tz.empty()) {
        sort(tz.rbegin(), tz.rend());
        int i = 0;
        while (i < (int)tz.size()) {
            sum -= tz[i], i += 2;
        } 
    }
    cout << (sum >= m + 1 ? "Sasha\n" : "Anna\n");
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