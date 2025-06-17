#include <bits/stdc++.h>
using namespace std;

void print_1_to_n(int n) {
    if (n == 0) return;
    print_1_to_n(n - 1);
    cout << n << " "; 
}

int main() {
    int n;
    cin >> n; 
    print_1_to_n(n);
    return 0;
}   