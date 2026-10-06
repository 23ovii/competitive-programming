#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, mn = 10, mx = -1, mn1 = 10, mx1 = -1;
    cin >> a >> b;
    if (a == 0) mn = mx = 0;
    if (b == 0) mn1 = mx1 = 0;
    while (a) {
        int c = a % 10;
        if (c > mx) mx = c;
        if (c < mn) mn = c;
        a /= 10;
    }
    while (b) {
        int c = b % 10;
        if (c > mx1) mx1 = c;
        if (c < mn1) mn1 = c;
        b /= 10;
    }
    if (mx == mn1) cout << mx;
    else if (mn == mx1) cout << mn;
    else cout << "NU";
    return 0;
}