#include <bits/stdc++.h>
using namespace std;

void prime_number(int n) {
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
    prime_number(n);
    return 0;
}