#include <bits/stdc++.h>

using namespace std;

/* Fractional knapsack */

// TC - O(n log n), SC - O(1)

struct Item {
  int value;
  int weight;
};

bool comp(Item a, Item b) {
  double r1 = (double)a.value / a.weight;
  double r2 = (double)b.value / b.weight;
  return r1 > r2;
}

double fractional_knapsack(vector<Item> &v, int W) {
  sort(v.begin(), v.end(), comp);
  double ans = 0.0;
  for (auto &it : v) {
    if (it.weight <= W) {
      ans += it.value;
      W -= it.weight;
    } else {
      ans += (double)it.value / it.weight * W;
      break;
    }
  }
  return ans;
}
