#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    unordered_map<char, int> mpp;
    for (int i = 0; i < s.size(); i++) mpp[s[i]]++;

    int q;
    cin >> q;
    while (q--) {
        char ch;
        cin >> ch;
        cout << mpp[ch] << endl;
    }

    return 0;
}
