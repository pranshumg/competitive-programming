#include <bits/stdc++.h>

using namespace std;

void func(string s, int n) {
    if (n == 0) {
        return;
    }
    cout << s << '\n';
    func(s, n - 1);
}

int main() {
    string s;
    getline(cin, s);
    int n;
    cin >> n;
    func(s, n);    
    return 0;
}