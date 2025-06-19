#include <bits/stdc++.h>
using namespace std;

int second_largest_element(vector<int> &vec, int n) {
    int largest = vec[0];
    int second_largest = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (vec[i] > largest) {
            second_largest = largest;
            largest = vec[i];
        } else if (vec[i] < largest && vec[i] > second_largest) second_largest = vec[i];
    }
    return second_largest;
}

int second_smallest_element(vector<int> &vec, int n) {
    int smallest = vec[0];
    int second_smallest = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (vec[i] < smallest) {
            second_smallest = smallest;
            smallest = vec[i];
        } else if (vec[i] > smallest && vec[i] < second_smallest) second_smallest = vec[i];
    }
    return second_smallest;
}

vector<int> get_second_order_elements(vector<int> &vec, int n) {
    int second_largest = second_largest_element(vec, n);
    int second_smallest = second_smallest_element(vec, n);
    return {second_largest, second_smallest};
}

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) cin >> vec[i];
    vector<int> ans = get_second_order_elements(vec, n);
    for(auto it : ans) cout << it << " ";
    return 0;
}