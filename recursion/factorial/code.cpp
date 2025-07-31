#include <bits/stdc++.h>

using namespace std;

// TC - O(n)
// SC - O(n)
int func(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * func(n - 1);
}

int main() {
    int n;
    cin >> n;
    cout << func(n) << '\n';    
    return 0;
}