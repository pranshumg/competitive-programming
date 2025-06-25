/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++) {
         cin >> arr[i];
    }
    sort(arr, arr + n);
    if (arr[n - 1] == 1) {
        cout << "HARD" << '\n';
    } else {
        cout << "EASY" << '\n';
    }
    return 0;
}