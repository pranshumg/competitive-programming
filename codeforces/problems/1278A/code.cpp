/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string p, h;
    cin >> p >> h;
    if ((int)p.size() > (int)h.size()) {
        cout << "NO\n";
        return;
    }
    bool flag = false;
    sort(p.begin(), p.end());
    for (int i = 0; i < (int)h.size(); i++) {
        string temp = h.substr(i, (int)p.size());
        sort(temp.begin(), temp.end());
        if (temp == p) {
            flag = true;
            break;
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
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