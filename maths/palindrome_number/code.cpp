#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    int og_n = n, rev_n = 0;
    while (n > 0) {
        int ld = n % 10;
        rev_n = rev_n * 10 + ld;
        n /= 10;
    }
    if (og_n == rev_n) cout << "True" << endl;
    else cout << "False" << endl;
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}