#include <bits/stdc++.h>
using namespace std;
int nr_sa(int a[100][100], int n, int m) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int minLin = a[i][0], maxLin = a[i][0];
            for (int k = 0; k < m; k++) {
                if (a[i][k] < minLin) minLin = a[i][k];
                if (a[i][k] > maxLin) maxLin = a[i][k];
            }
            int minCol = a[0][j], maxCol = a[0][j];
            for (int k = 0; k < n; k++) {
                if (a[k][j] < minCol) minCol = a[k][j];
                if (a[k][j] > maxCol) maxCol = a[k][j];
            }
            if ((a[i][j] == maxLin && a[i][j] == minCol) || (a[i][j] == minLin && a[i][j] == maxCol)) {
                count++;
            }
        }
    }
    return count;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m, a[100][100];
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }
    nr_sa(a, n, m);
    return 0;
}