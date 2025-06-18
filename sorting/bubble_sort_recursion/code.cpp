#include <bits/stdc++.h>
using namespace std;

void bubble_sort(int arr[], int n) {
    if (n == 1) return;
    int did_swap = 0;
    for (int j = 0; j < n - 1; j++) {
        if (arr[j + 1] < arr[j]) {
            swap(arr[j], arr[j + 1]);
            did_swap = 1;
        }
    }
    if (did_swap == 0) return;
    bubble_sort(arr, n - 1);
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    bubble_sort(arr, n);
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}