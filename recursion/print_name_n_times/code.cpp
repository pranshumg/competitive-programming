#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    if (n == 0) return;
    cout << "Pranshu" << endl;
    func(n - 1);
}

int main() {
    int n;
    cin >> n; 
    func(n);
    return 0;
}