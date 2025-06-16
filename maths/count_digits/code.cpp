#include <bits/stdc++.h>
using namespace std;

int count_digits(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int ans = count_digits(n);
    cout << ans << endl;
    return 0;
}