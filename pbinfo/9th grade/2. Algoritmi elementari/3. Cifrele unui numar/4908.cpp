#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, max, max1, min, min1, c;
    cin >> n;
    max = max1 = -99999; min = min1 = 99999;
    while (n) {
        c = n % 10;
        if (c > max) {
            max1 = max;
            max = c;
        } else if (c > max1) {
            max1 = c;
        }
        if (c < min) {
            min1 = min;
            min = c;
        } else if (c < min1) {
            min1 = c;
        }
        n /= 10;
    }
    cout << max1 << " " << min1;
    return 0;
}