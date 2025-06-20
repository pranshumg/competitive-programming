/**
 *   author: pranshumg
**/
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
 
    sort(arr, arr + 3);
 
    int ans = abs(arr[0] - arr[1]) + abs(arr[2] - arr[1]);
    cout << ans << endl;
 
    return 0;
}