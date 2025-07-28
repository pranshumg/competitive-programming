#include <bits/stdc++.h>

using namespace std;

// TC - O(log n)
void func(int n) {
    int cnt = (int)(log10(n) + 1), sum = 0, og_n = n;
    while (n > 0) {
        int d = n % 10;
        sum += pow(d, cnt);
        n /= 10;
    }
    if (sum == og_n) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}