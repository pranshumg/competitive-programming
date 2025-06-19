// Optimal:

#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_of_sorted_arrays(vector<int> &vec1, int n1, vector<int> &vec2, int n2) {
    vector<int> intersection;
    int i = 0, j = 0;
    while (i < n1 && j < n2) {
        if (vec1[i] < vec2[j]) i++;
        else if (vec1[i] > vec2[j]) j++;
        else {
            intersection.emplace_back(vec1[i++]);
            j++;
        }
    }
    return intersection;
}

int main() { 
    int n1;
    cin >> n1;
    vector<int> vec1(n1);
    for (int i = 0; i < n1; i++) cin >> vec1[i];
    int n2;
    cin >> n2;
    vector<int> vec2(n2);
    for (int i = 0; i < n2; i++) cin >> vec2[i];
    vector<int> intersection = intersection_of_sorted_arrays(vec1, n1, vec2, n2);
    for (auto it : intersection) cout << it << " ";
    return 0;
}

// Brute Force:

/*
#include <bits/stdc++.h>
using namespace std;

vector<int> intersection_of_sorted_arrays(vector<int> &vec1, int n1, vector<int> &vec2, int n2) {
    int n3 = n1 <= n2 ? n1 : n2;
    vector<int> visited(n3, 0), intersection;
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (vec1[i] == vec2[j] && visited[j] == 0) {
                intersection.emplace_back(vec1[i]);
                visited[j] = 1;
                break;
            }
            if (vec2[j] > vec1[i]) break;
        }
    }
    return intersection;
}

int main() { 
    int n1;
    cin >> n1;
    vector<int> vec1(n1);
    for (int i = 0; i < n1; i++) cin >> vec1[i];
    int n2;
    cin >> n2;
    vector<int> vec2(n2);
    for (int i = 0; i < n2; i++) cin >> vec2[i];
    vector<int> intersection = intersection_of_sorted_arrays(vec1, n1, vec2, n2);
    for (auto it : intersection) cout << it << " ";
    return 0;
}
*/