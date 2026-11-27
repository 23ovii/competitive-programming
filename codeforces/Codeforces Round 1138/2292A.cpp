#include <bits/stdc++.h>
using namespace std;
void solve() {
    int l, a, b, ideal = 0, val[22] = {};
    cin >> l >> a >> b;
    bool ok = true;
    for (int i = a % l;; i = (i + a) % l) {
        if (val[i] == 1) {
            break;
        }
        val[i % l]++;
    }
    for (int i = b % l;; i = (i + b) % l) {
        if (val[i % l] >= 2) {
            break;
        }
        if (val[i % l] == 1) {
            ideal++;
            val[i % l]++;
        }
        else val[i] = 3;
    }
    cout << ideal << "\n";
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    while (n--) solve();
    return 0;
}
