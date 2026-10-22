#include <bits/stdc++.h>
using namespace std;
int ascendent(int n, int x, int y) {
    int u = n % 10, s = 0;
    for (int i = x; i <= y; i++) {
        int temp = i;
        bool ok = 1;
        while (temp) {
            if (temp % 10 < u) {
                ok = 0;
                break;
            }
            temp /= 10;
        }
        if (ok) s += i;
    }
    return s;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x, y;
    cin >> n >> x >> y;
    cout << ascendent(n, x, y);
    return 0;
}
