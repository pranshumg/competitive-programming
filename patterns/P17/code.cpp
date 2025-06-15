#include <bits/stdc++.h>
using namespace std;

void print17(int n) {
    for (int i = 0; i < n; i++) {
        char ch1 = 'A';
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j <= i; j++) {
            cout << ch1++;
        }
        for (char ch2 = ch1 - 2; ch2 >= 'A';) {
            cout << ch2--;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print17(n);
    return 0;
}