#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>
#include <unordered_map>

using namespace std;
using ll = long long;

int main() {
    size_t t; cin >> t;
    for (size_t i = 0; i < t; i++) {
        int k; cin >> k;
        vector<int> nums(k);
        vector<int> cnt(k + 1);
        for(int j = 0; j < k; j++) { 
            cin >> nums[j];
            cnt[nums[j]]++;
        }

        for (int j = 1; j <= k; j++) {
            if ((k - 2) % j || cnt[j] <= 0) {
                continue;
            }

            int diff = (k - 2) / j;
            if (cnt[diff] > 0) {
                cout << j << ' ' << diff << '\n';
                break;
            }

        }
    }
    return 0;
}