#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    vector<array<int, 2>> matchboxes(m);
    for (int i = 0; i < m; i++) {
        cin >> matchboxes[i][0] >> matchboxes[i][1];
    }
    sort(matchboxes.begin(), matchboxes.end(), [](const array<int, 2>& a,const array<int, 2>& b) { return a[1] > b[1]; });
    for (int i = 0; i < m; i++) {
        cout << matchboxes[i][0] << ' ' << matchboxes[i][1] << '\n';
    }
    return 0;
}