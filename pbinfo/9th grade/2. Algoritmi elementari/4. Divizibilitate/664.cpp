#include <bits/stdc++.h>
using namespace std;
long long cmmmc(long long a, long long b) {
    long long p, r;
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

    int n;
    long long nr = 0, x;
    cin >> n;
    while (n--) {
        cin >> x;
        long long div[1001];
        int temp = 1;
        for (long long i = 1; i * i <= x; i++) {
            if (x % i == 0) {
                div[temp++] = i;
                if (x / i != i) div[temp++] = x / i;
            }
        }

        nr = 0;
        for (int i = 1; i < temp; i++) {
            for (int j = i; j < temp; j++) {
                long long a = div[i];
                long long b = div[j];
                if (cmmmc(a, b) == x) nr++;
            }
        }
        cout << nr << " ";
    }
    return 0;
}
