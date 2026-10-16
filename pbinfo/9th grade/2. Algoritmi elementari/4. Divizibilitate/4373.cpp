#include <bits/stdc++.h>
using namespace std;
long long cmmmc (long long a, long long b) {
    long long p = a * b;
    while (b) {
        long long r = a % b;
        a = b;
        b = r;
    }
    return p / a;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    long long a, b, nr = 0, m;
    cin >> a >> b;
    m = cmmmc(a, b);
    nr = ((m / a) - 1 + (m / b) - 1);
    cout << nr;
    return 0;
}