#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;

    int heights[n];
    for (int i = 0; i < n; i++) {
        cin >> heights[i];
    }

    int res = 1;
    int left_side_idx = 0;

    int right_side_idx = 0;
    int current_height = 0;
    for (int i = 0; i < n; i++) {
        left_side_idx = i - 1;
        current_height = heights[i];
        while (left_side_idx >= 0 && heights[left_side_idx] <= current_height) {
            current_height = heights[left_side_idx];
            left_side_idx--;
        }
        left_side_idx++;

        right_side_idx = i + 1;
        current_height = heights[i];
        while (right_side_idx < n && heights[right_side_idx] <= current_height) {
            current_height = heights[right_side_idx];
            right_side_idx++;
        }
        right_side_idx--;

        res = max(res, (i - left_side_idx) + (right_side_idx - i) + 1);
    }
    cout << res;
    return 0;
}