#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int temp = n;
    int nr = 0;
    int inv = 0;
    while (temp) {
        nr++;
        inv = inv * 10 + temp % 10;
        temp /= 10;
    }
    if (nr == 1) {
        cout << "DA";
    } else if (nr == 2 && n % 11 == 0) {
        cout << "DA";
    } else if (nr == 3 && n % 10 == n / 100) {
        cout << "DA";
    } else if (nr == 4 && inv ==  n) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}