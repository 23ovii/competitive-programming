#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m, a[101][1001], max = -999999, cnt = 0;
    cin >> m >> n;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] > max) max = a[i][j];
        }
    }
    for (int i = 0; i < m; i++) {
        bool ok = 1;
        for (int j = 0; j < n; j++) {
            if (a[i][j] == max && ok) {
                cnt++;
                ok = 0;
            }
        }
    }
    cout << max << " " << cnt;
    return 0;
}