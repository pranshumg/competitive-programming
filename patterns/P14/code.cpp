#include <bits/stdc++.h>
using namespace std;

void print14(int n) {
    for (int i = 0; i < n; i++) {
        char ch = 'A';
        for (int j = 0; j <= i; j++) {
            cout << ch++;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print14(n);
    return 0;
}