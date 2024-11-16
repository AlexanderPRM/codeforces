#include <iostream>
#include <unordered_set>
#include <tuple>

using namespace std;

struct TupleHash {
    template <typename T1, typename T2, typename T3>
    size_t operator()(const std::tuple<T1, T2, T3>& tuple) const {
        size_t h1 = std::hash<T1>()(std::get<0>(tuple));
        size_t h2 = std::hash<T2>()(std::get<1>(tuple));
        size_t h3 = std::hash<T3>()(std::get<2>(tuple));
        return h1 ^ (h2 << 1) ^ (h3 << 2); // Combine the hash values
    }
};

int main() {
    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        unordered_set<tuple<int, int, int>, TupleHash> seen_cells = {};
        int n, a, b;
        cin >> n >> a >> b;
        int x = 0, y = 0;
        char operations[n];
        for (int j = 0; j < n; j++) {
            cin >> operations[j];
        }
        int current_operation = 0;
        int left_min = -1000;
        int right_max = 1000;
        while (!(x == a && y == b)) {
            char current_move = operations[current_operation];
            if (current_move == 'N') {
                y++;
            } else if (current_move == 'E') {
                x++;
            } else if (current_move == 'S') {
                y--;
            } else {
                x--;
            }
            current_operation++;
            current_operation %= n;

            tuple<int, int, int> position = make_tuple(x, y, current_operation);
            if (x < left_min || x > right_max || y < left_min || y > right_max || seen_cells.find(position) != seen_cells.end()) {
                break;
            }
            seen_cells.insert(position);
        }
        if (x == a && y == b) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }

    }
}