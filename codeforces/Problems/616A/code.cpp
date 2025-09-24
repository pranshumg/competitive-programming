/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>

using namespace std;

void run_case() {
    string a, b;
    cin >> a >> b;
    int idx1 = 0, idx2 = 0;
    bool did_change_1 = false, did_change_2 = false;
    for (int i = 0; i < (int)a.size(); i++) {
        if (a[i] != '0') {
            idx1 = i;
            did_change_1 = true;
            break;
        }
    }
    if (!did_change_1&& a[(int)a.size() - 1] == '0') {
        idx1 = (int)a.size() - 1;
    }
    for (int i = 0; i < (int)b.size(); i++) {
        if (b[i] != '0') {
            idx2 = i;
            did_change_2 = true;
            break;
        }
    }
    if (!did_change_2 && b[(int)b.size() - 1] == '0') {
        idx2 = (int)b.size() - 1;
    }
    if ((int)a.size() - idx1 > (int)b.size() - idx2) {
        cout << '>';
    } else if ((int)a.size() - idx1 < (int)b.size() - idx2) {
        cout << '<';
    } else {
        for (int i = idx1; i < (int)a.size(); i++, idx2++) {
            if (a[i] > b[idx2]) {
                cout << '>';
                return;
            } else if (a[i] < b[idx2]) {
                cout << '<';
                return;
            }
        }
        cout << '=';
    }
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