#include <bits/stdc++.h>
using namespace std;

void print12(int n) {
    int z;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            cout << j + 1;
            z = j + 1;
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        } 
        for (int j = 0; j <= i; j++, z--) {
            cout << z;
        }
        cout << endl;
    }
}

int main() {
    int n;
    cin >> n;
    print12(n);
    return 0;
}