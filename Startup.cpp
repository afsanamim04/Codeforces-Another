#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, k;
        cin >> n >> k;

        unordered_map<int, vector<int>> brand_costs;

        // Read each bottle's brand and cost, and group costs by brand
        for (int i = 0; i < k; i++) {
            int bi, ci;
            cin >> bi >> ci;
            brand_costs[bi].push_back(ci);
        }

        // Vector to store the sum of the top costs for each brand
        vector<int> brand_sums;

        for (auto &entry : brand_costs) {
            auto &costs = entry.second;

            // Sort the costs in descending order
            sort(costs.rbegin(), costs.rend());

            int brand_total = 0;
            for (int cost : costs) {
                brand_total += cost;
            }
            brand_sums.push_back(brand_total);
        }

        // Sort all brand sums in descending order
        sort(brand_sums.rbegin(), brand_sums.rend());

        // Sum up the top `n` brand sums (or all if there are fewer than `n`)
        long long max_earnings = 0;
        for (int i = 0; i < min(n, (int)brand_sums.size()); i++) {
            max_earnings += brand_sums[i];
        }

        cout << max_earnings << endl;
    }

    return 0;
}
