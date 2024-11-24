#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
using ll = long long;

int main() {
	ll num; cin >> num;
    ll res = 0;
    while (num > 9) {
        ll sum = 0;
        while (num >= 0) {
            sum += num % 10;
            num /= 10;
            cout << num << '\n';
        }
        cout << sum << '\n';
        num = sum;
        res++;
    }
    cout << res;
	return 0;
}