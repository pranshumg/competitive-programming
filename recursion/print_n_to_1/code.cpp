#include <bits/stdc++.h>

using namespace std;

// TC - O(n)
// SC - O(n)
void func(int n) {
    if (n == 0) {
        return;
    }
    cout << n << ' ';
    func(n - 1);
}

int main() {
    int n;
    cin >> n;
    func(n);    
    return 0;
}