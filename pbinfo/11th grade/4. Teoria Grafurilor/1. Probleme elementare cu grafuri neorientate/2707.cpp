#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[101][101];
    cin >> n;
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if((i==j && a[i][i] == 1) ||
               (i!=j && a[i][j] != a[j][i]) ||
               (a[i][j] > 1)) {
                cout << 0;
                return 0;
            }
        } 
    } cout << 1;
    return 0;
}