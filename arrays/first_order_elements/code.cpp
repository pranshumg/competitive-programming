#include <bits/stdc++.h>
using namespace std;

int largest_element(vector<int> &vec, int n) {
    int largest = vec[0];
    for (int i = 0; i < n; i++) if (vec[i] > largest) largest = vec[i];
    return largest;
}

int smallest_element(vector<int> &vec, int n) {
    int smallest = vec[0];
    for (int i = 0; i < n; i++) if (vec[i] < smallest) smallest = vec[i];
    return smallest;
}

vector<int> get_first_order_elements(vector<int> &vec, int n) {
    int largest = largest_element(vec, n);
    int smallest = smallest_element(vec, n);
    return {largest, smallest};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> ans = get_first_order_elements(vec, n);
    for(auto it : ans) cout << it << " ";
    return 0;
}