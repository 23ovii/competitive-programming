#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long k, n, w;
    cin >> k >> n >> w;
    for (long long i = 1; i <= w; i++) {
        n -= i * k;
    }
    if (n > 0) {
        cout << 0;
    } else {
        cout << abs(n) << "\n";
    }
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
    return 0;
}