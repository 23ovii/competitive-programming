#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max = -99999;
    cin >> n;
    while (n--) {
        int m; cin >> m;
        if (m > max) max = m;
    }
    cout << max;
    return 0;
}