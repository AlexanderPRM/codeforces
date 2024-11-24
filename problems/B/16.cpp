#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    size_t n, m;
    cin >> n >> m;
    vector<array<long long, 2>> matchboxes(m);
    for (size_t i = 0; i < m; i++) {
        cin >> matchboxes[i][0] >> matchboxes[i][1];
    }
    sort(matchboxes.begin(), matchboxes.end(), [](const array<long long, 2>& a,const array<long long, 2>& b) { return a[1] > b[1]; });

    size_t current_matchbox = 0;
    long long res = 0;
    while (n > 0 && current_matchbox < m) {
        res += (matchboxes[current_matchbox][1] * min(matchboxes[current_matchbox][0], static_cast<long long>(n)));
        n -= min((size_t)matchboxes[current_matchbox][0], n);
        current_matchbox++;
    }
    cout << res;
    return 0;
}