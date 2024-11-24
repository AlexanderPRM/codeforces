#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_set>

using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    for (int i = 0; i < t; i++) {
        size_t n; cin >> n;
        int res = 0;
        unordered_set<size_t> seen;
        vector<int> nums(n); for (size_t i = 0; i < n; i++) { cin >> nums[i]; }
        for (size_t i = 0; i < n; i++) {
            for (size_t j = i + 1; j < n; j++) {
                if (nums[i] == nums[j] && seen.count(i) == 0 && seen.count(j) == 0) {
                    res++;
                    seen.insert(i);
                    seen.insert(j);
                }
            }
        }
        cout << res << '\n';
    }
    return 0;
}