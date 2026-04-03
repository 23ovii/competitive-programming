#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1000][3], problems = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int aux = 0;
        for (int j = 0; j < 3; j++) {
            cin >> a[i][j];
            if (a[i][j] == 1) aux++;
        } if (aux >= 2) {
            problems++;
        }
    } cout << problems;
    return 0;
}