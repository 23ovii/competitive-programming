#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int nr1, nr2;
    cin >> nr1 >> nr2;
    int a[4], b[4];
    for (int i = 1; i <= 3; i++) {
        a[i] = nr1 % 10;
        nr1 /= 10;
        b[i] = nr2 % 10;
        nr2 /= 10;
    } sort(a + 1, a + 4);
    sort(b + 1, b + 4);
    if (a[1] == b[1] && a[2] == b[2] && a[3] == b[3]) {
        cout << "DA\n";
    } else {
        cout << "NU\n";
    }
    return 0;
}