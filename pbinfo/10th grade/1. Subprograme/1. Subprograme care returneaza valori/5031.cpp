#include <bits/stdc++.h>
using namespace std;
int pagini(int n) {
    if (n % 4 != 0) return 0;
    int p = n / 4;
    if (p < 2) return 0;
    for (int d = 2; d * d <= p; d++) {
        if (p % d == 0) {
            return 0;
        }
    }
    return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    cout << pagini(n);
    return 0;
}
