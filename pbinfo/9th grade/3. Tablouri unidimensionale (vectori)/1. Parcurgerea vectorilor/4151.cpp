#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001], min = 99999999, max = -99999999, imax, imin;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 1; i <= n; i++) {
        if (a[i] > max) {
            max = a[i];
            imax = i;
        }
        if (a[i] < min) {
            min = a[i];
            imin = i;
        }
    }
    if (imax < imin) {
        swap(imax, imin);
    }
    for(int i = imin; i <= imax; i++) cout << a[i] << " ";
    return 0;
}