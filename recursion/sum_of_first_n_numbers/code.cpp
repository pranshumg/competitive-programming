#include <bits/stdc++.h>
using namespace std;

void sum_of_first_n_numbers(int n, int sum) {
    if (n == 0) {
        cout << sum << endl;
        return;
    }
    sum_of_first_n_numbers(n - 1, sum + n);
}

int main() {
    int n;
    cin >> n; 
    sum_of_first_n_numbers(n, 0);
    return 0;
}