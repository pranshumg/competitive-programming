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
    string s = "";
    bool flag = true;
    while (n--) {
        char c;
        int64_t i, j;
        cin >> c >> i;
        j += i;
        if (j > 100) {
            flag = false;
            break;
        }
        for (int j = 0; j < i; j++) {
            s += c;
        }
    }
    if (flag) {
        cout << s;
    } else {
        cout << "Too Long";
    }
    return 0;
}