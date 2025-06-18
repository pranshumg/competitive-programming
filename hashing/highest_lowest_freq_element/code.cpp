// Optimized approach (Using map):

#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n) {
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) mpp[arr[i]]++;

    int max_ele = arr[0], max_freq = mpp[arr[0]];
    int min_ele = arr[0], min_freq = mpp[arr[0]];
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

// Brute-Force approach(Using two loops): 

/*
#include <bits/stdc++.h>
using namespace std;

void func(int arr[], int n) {
    int hash[100000] = {0};
    for (int i = 0; i < n; i++) hash[arr[i]]++;

    int max_ele = arr[0], max_freq = hash[arr[0]];
    int min_ele = arr[0], min_freq = hash[arr[0]];
    for (int i = 0; i < n; i++) {
        int element = arr[i];
        int count = hash[arr[i]];

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
*/

