#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    string ans = "";  
    for (int i = 0; i < s.length(); i++) {
        bool found = false;

        for (int j = 0; j < ans.length(); j++) {
            if (s[i] == ans[j]) {
                found = true;
                break;
            }
        }

        if (!found) {
            ans += s[i];
        }  
    }

    if (ans.length() % 2 != 0) {
        cout << "IGNORE HIM!" << endl;
    } else {
        cout << "CHAT WITH HER!" << endl;
    }

    return 0;
}