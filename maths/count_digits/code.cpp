#include <bits/stdc++.h>
using namespace std;

// Method 1
int func1(int n) {
    int count = 0;
    while (n > 0) {
        count++;
        n /= 10;
    }
    return count; 
}

// Method 2
int func2(int n) {
    int count = (int)(log10(n) + 1);
    return count;
}

int main() {
    int n;
    cin >> n;
    int ans1 = func1(n), ans2 = func2(n);
    cout << "Method 1: " << ans1 << endl;
    cout << "Method 2: " << ans2 << endl;
    return 0;
}