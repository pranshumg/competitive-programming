#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;  
    } 

    int q;
    cin >> q;
    while (q--) {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }

    return 0;
}
