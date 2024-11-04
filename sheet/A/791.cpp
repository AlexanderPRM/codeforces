#include <iostream>

using namespace std;

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    int res = 0;
    while (n1 <= n2) {
        res++;
        n1 *= 3;
        n2 *= 2;
    }
    cout << res;
}