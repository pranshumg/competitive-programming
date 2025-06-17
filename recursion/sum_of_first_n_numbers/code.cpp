#include <bits/stdc++.h>
using namespace std;

int sum_of_first_n_numbers(int n) {
    if (n == 0) return 0;
    return n + sum_of_first_n_numbers(n - 1);
}

int main() {
    int n;
    cin >> n; 
    cout << sum_of_first_n_numbers(n) << endl;
    return 0;
}