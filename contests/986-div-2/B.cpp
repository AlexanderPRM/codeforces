#include <iostream>

using namespace std;
using ll = long long;

int main() {
    int t; cin >> t;
    while (t--) {
        ll n, b, c; cin >> n >> b >> c;
        if (b == 0) {
            if (c < n - 2) {
                cout << -1 << '\n';
            } else if (c <= n - 1) {
                cout << n - 1 << '\n';
            } else {
                cout << n << '\n';
            }
        } else if (c >= n){
            cout << n << '\n';
        } else {
            cout << n - (1 + (n - c - 1) / b) << '\n';
        }
    }
    return 0;
}