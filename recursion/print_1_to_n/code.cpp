#include <bits/stdc++.h>

using namespace std;

// TC - O(n)
// SC - O(n)
void func(int n) {
    if (n == 0) {
        return;
    }
    func(n - 1);
    cout << n << ' ';
}

int main() {
    int n;
    cin >> n;
    func(n);    
    return 0;
}