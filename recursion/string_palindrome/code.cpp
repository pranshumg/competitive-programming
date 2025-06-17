#include <bits/stdc++.h>
using namespace std;

bool func(int i, string &s) {
    if (i >= s.size() / 2) return true;
    if (s[i] != s[s.size() - i - 1]) return false;
    return func(i + 1, s);
}

int main() {
    string s;
    cin >> s;
    cout << boolalpha << func(0, s);
    return 0;
}