#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    while (n--) {
        string s;
        cin >> s;

        for (int i = 0; i < s.length() - 2; i++) {
            cout << s[i];
        }
        cout << 'i' << endl;
    }

    return 0;
}