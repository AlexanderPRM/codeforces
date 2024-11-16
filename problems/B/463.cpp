#include <iostream>
#include <vector>

using namespace std;

int main() {
    size_t n; cin >> n;

    long long res = 0;
    long long energy = 0;
    int x = 0, y;
    for (size_t i = 1; i <= n; i++) {
        cin >> y;
        energy += x - y;
        if (energy < 0) {
            res += -energy;
            energy = 0;
        }
        x = y;
    }
    cout << res;
    return 0;
}