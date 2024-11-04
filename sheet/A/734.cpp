#include <iostream>

using namespace std;

int main() {
    int anton_wons = 0;
    int danik_wons = 0;

    int n = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        char winner;
        cin >> winner;
        if (winner == 'A') {
            anton_wons++;
        } else {
            danik_wons++;
        }
    }
    
    if (anton_wons > danik_wons) {
        cout << "Anton";
    } else if (anton_wons < danik_wons) {
        cout << "Danik";
    } else {
        cout << "Friendship";
    }
}