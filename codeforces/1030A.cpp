#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[100], n;
    cin >> n;

    for (int i = 0; i < n; i++) {
         cin >> arr[i];
    }

    sort(arr, arr + n);

    if (arr[n - 1] == 1) {
        cout << "HARD" << endl;
    } else {
        cout << "EASY" << endl;
    }

    return 0;
}