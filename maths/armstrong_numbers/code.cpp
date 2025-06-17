#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    int og_n = n, count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    n = og_n;
    int sum = 0;
    while (n > 0) {
        int ld = n % 10;
        sum += pow(ld, count);
        n /= 10;
    }
    if (og_n == sum) cout << "True" << endl;
    else cout << "False" << endl;
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}