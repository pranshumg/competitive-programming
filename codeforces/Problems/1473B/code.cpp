/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

string mul(string s, int n) {
    string res = "";
    for (int i = 0; i < n; i++) {
        res += s;
    }
    return res;
}

void run_case() {
    string s, t;
    cin >> s >> t;
    if ((int)s.size() > (int)t.size()) {
        swap(s, t);
    }
    int s_A = count(s.begin(), s.end(), 'a'), s_B = (int)s.size() - s_A;
    int t_A = count(t.begin(), t.end(), 'a'), t_B = (int)t.size() - t_A;
    if ((double)s_A / (int)s.size() == (double)t_A / (int)t.size() && (double)s_B / (int)s.size() == (double)t_B / (int)t.size() && mul(s, (int)t.size()) == mul(t, (int)s.size())) {
        int l = lcm((int)s.size(), (int)t.size());
        cout << mul(s, l / (int)s.size()) << '\n';
        return;
    }
    cout << -1 << '\n';
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