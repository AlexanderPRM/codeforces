#include <iostream>

using namespace std;

int main() {
    int n = 0, h = 0;
    cin >> n >> h;
    int res = 0;
    for (int i = 0; i < n; i++) {
        int height_of_person = 0;
        cin >> height_of_person;
        if (height_of_person > h) {
            res += 2;
        } else {
            res += 1;
        }
    }
    cout << res;
	return 0;
}