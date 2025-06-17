#include <bits/stdc++.h>
using namespace std;

void print_name_n_times(int n) {
    if (n == 0) return;
    cout << "Pranshu" << endl;
    print_name_n_times(n - 1);
}

int main() {
    int n;
    cin >> n; 
    print_name_n_times(n);
    return 0;
}