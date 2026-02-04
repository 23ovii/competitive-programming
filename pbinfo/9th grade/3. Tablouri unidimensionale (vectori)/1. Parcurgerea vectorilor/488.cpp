#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, a[1001];
    cin >> n;
    for (int i = 1; i <= n; i++) cin >> a[i];
    for (int i = 2; i <= n; i += 2) cout << a[i] << " ";
    cout << "\n";
    if (n % 2 == 0) n--;
    for (int i = n; i >= 1; i -= 2) cout << a[i] << " ";
    return 0;
}