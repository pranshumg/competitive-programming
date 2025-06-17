#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[arr[i]]++;

    int max_freq = 0, min_freq = n;
    int max_ele = 0, min_ele = 0;
    for (auto it : mpp) {
        int element = it.first;
        int count = it.second;

        if (count < min_freq) {
            min_freq = count;
            min_ele = element;
        }
        if (count > max_freq) {
            max_freq = count;
            max_ele = element;
        }
    }
    cout << max_ele << " " << min_ele << endl;
}

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    func(arr, n);
    return 0;
}

