#include <iostream>

using namespace std;

int main() {
    char first[101];
    char second[101];
    cin >> first >> second;

    for (int i = 0; first[i] != '\0'; i++) {
        int char_number_of_first_string = first[i];
        int char_number_of_second_string = second[i];
        if (65 <= char_number_of_first_string && char_number_of_first_string <= 90) {
            char_number_of_first_string += 32;
        }
        if (65 <= char_number_of_second_string && char_number_of_second_string <= 90) {
            char_number_of_second_string += 32;
        }

        if (char_number_of_first_string < char_number_of_second_string) {
            cout << -1;
            return 0;
        } else if (char_number_of_first_string > char_number_of_second_string) {
            cout << 1;
            return 0;
        }
    }
    cout << 0;
    return 0;
}