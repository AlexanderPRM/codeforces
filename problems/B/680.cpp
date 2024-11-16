#include <iostream>

using namespace std;

int main() {
    int n, a;
    cin >> n >> a;
    int criminals[n];
    for (int i=0;i<n;i++) {
        cin >> criminals[i];
    }
    int distance = 1;
    int left_idx;
    int right_idx;
    int start_pos = a - 1;
    int res = criminals[start_pos] ? 1 : 0;
    while (start_pos - distance >= 0 || start_pos + distance < n) {
        left_idx = start_pos - distance;
        right_idx = start_pos + distance;
        int left_city_has_criminal = left_idx >= 0 ? criminals[left_idx] : 0;
        int right_city_has_criminal = right_idx < n ? criminals[right_idx] : 0;

        int only_one_has_criminal = !(left_city_has_criminal && right_city_has_criminal) && (left_city_has_criminal || right_city_has_criminal);

        distance++;
        if (left_idx >= 0 && right_idx < n && only_one_has_criminal) {
            continue;
        }
        if (left_city_has_criminal || right_city_has_criminal) {
            res += left_city_has_criminal + right_city_has_criminal;
        }
    }
    cout << res;
}