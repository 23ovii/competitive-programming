#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x = 0;
    cin >> n;
    char a[n][4];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        if (a[i][0] == '+' || a[i][1] == '+') {
            x++;
        } else {
            x--;
        }
    } cout << x;
    return 0;
}