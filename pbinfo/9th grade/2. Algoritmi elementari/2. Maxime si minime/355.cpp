#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, min = 99999;
    cin >> n;
    while (n--) {
        int m; cin >> m;
        if (m < min) min = m;
    }
    cout << min;
    return 0;
}