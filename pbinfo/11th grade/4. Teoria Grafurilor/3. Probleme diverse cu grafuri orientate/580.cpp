#include <iostream>
using namespace std;
int a[101][101];
int main() {
    int x, y, n, m;
    cin >> n >> m;
    for (int i = 1; i <= m; i++) {
                cin >> x >> y;
                a[x][y] =  1;
    }
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                    if (a[i][j] == 0  &&
                        a[i][k] == 1 && a[k][j] == 1) {
                            a[i][j] = 1;
                        }
            }
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        } cout << "\n";
    }
    return 0;
}