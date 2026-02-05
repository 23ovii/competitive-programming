#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[501], count = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = n;
    while (i <= j) {
        if (a[i] % 100 / 10 == a[j] % 100 / 10) count++;
        i++; j--;
    }
    cout << count;
    return 0;
}