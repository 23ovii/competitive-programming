// not solved - 36/100
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n, nx, nxx, k, nr = 0;
    cin >> n >> k; k--;
    nx = n; nxx = n;
    while (nx) {
        nr++;
        nx /= 10;
    }
    while (k) {
        n *= pow(10, nr);
        n += nxx;
        k--;
    }
    cout << n % 72;
}
