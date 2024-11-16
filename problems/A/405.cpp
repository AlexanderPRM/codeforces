#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int numbers[n];
 
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    bool ascending_order = false;
    int diff = 0;
    while (!ascending_order) {
        ascending_order = true;
        for (int i = 0; i < n - 1; i++) {
            if (numbers[i] > numbers[i + 1]) {
                diff = numbers[i] - numbers[i + 1];
                numbers[i] -= diff;
                numbers[i + 1] += diff;
                ascending_order = false;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        cout << numbers[i];
        if (i < n - 1) {
            cout << ' ';
        }
    }
    return 0;
}