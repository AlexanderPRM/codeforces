#include <iostream>

using namespace std;

int main() {
    int current = 0;
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            cin >> current;
            if (current == 1) {
                cout << abs(3 - j) + abs(3 - i);
                return 0;
            }
        }
    }
}