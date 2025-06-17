#include <bits/stdc++.h>
using namespace std;

void func(int n) {
    vector<int> vec;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            vec.emplace_back(i);
            if (n / i != i) vec.emplace_back(n / i);
        }
    }
    sort(vec.begin(), vec.end());
    for (auto it : vec) cout << it << " ";
}

int main() {
    int n;
    cin >> n;
    func(n);
    return 0;
}