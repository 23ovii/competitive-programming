#include <bits/stdc++.h>
using namespace std;

void solve() {
    long long n, a, b;
    cin >> n >> a >> b;
    long long int groups = n / 3;
    long long rest = n % 3;
    long long cost = groups * min(b, 3 * a);
    if (rest == 1) {
        cost += min(a, b);
    }
    if (rest == 2) {
        cost += min(2 * a, b);
    }
    cout << cost << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}