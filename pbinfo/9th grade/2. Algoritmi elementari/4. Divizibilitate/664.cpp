#include <bits/stdc++.h>
using namespace std;
int cmmmc(int a, int b) {
    int p, r;
    p = a * b;
    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }
    return p / a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x;
    long long nr = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> x; nr = 0;
        for (int j = 1; j <= x; j++) {
            for (int k = 1; k <= x; k++) {
                if (cmmmc(j, k) == x) nr++;
            }
        }
        cout << nr << " ";
    }
    return 0;
}
