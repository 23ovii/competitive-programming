#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001], min = 99999999, max = -99999999, count = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) {
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == max - min) {
            count++;
        }
    }
    cout << count;
    return 0;
}