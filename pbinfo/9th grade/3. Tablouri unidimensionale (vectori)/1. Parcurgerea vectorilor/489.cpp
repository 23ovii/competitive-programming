#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    int i = 1, j = n;
    while (i <= j) {
        if (i == j) cout << a[i] << " ";
        else cout << a[i] << " " << a[j] << " ";
        i++;
        j--;
    }
    return 0;
}