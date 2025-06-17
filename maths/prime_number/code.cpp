#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    int count = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            count++;
            if (n / i != i) count++;
        }
    }
    if (count == 2) cout << "True" << endl;
    else cout << "False" << endl;
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}