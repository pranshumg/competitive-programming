#include <bits/stdc++.h>

using namespace std;

// Method 1
int func1(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++, n /= 10;
    }
    return cnt;
}

// Method 2
int func2(int n) {
    return (int)(log10(n) + 1);
}

int main() {
    int n;
    cin >> n;
    cout << func2(n) << '\n';    
    return 0;
}