#include <bits/stdc++.h>

using namespace std;

/* Fractional knapsack */

// TC - O(n log n), SC - O(1)

struct Item {
    int value;
    int weight;
};

// Comparator to sort items by Value-to-Weight ratio (Density)
bool comp(Item a, Item b) {
    double r1 = (double)a.value / a.weight;
    double r2 = (double)b.value / b.weight;
    return r1 > r2;
}

double fractional_knapsack(vector<Item> &v, int W) {
    // Sort items based on density (highest value per unit weight first)
    sort(v.begin(), v.end(), comp);
    double ans = 0.0;
    for (auto &it : v) {
        // If the item fits entirely, take it all
        if (it.weight <= W) {
            ans += it.value;
            W -= it.weight;
        } 
        // If it doesn't fit, take as much as possible (fraction)
        else {
            ans += ((double)it.value / it.weight) * W;
            break; // Knapsack is now full
        }
    }
    return ans;
}