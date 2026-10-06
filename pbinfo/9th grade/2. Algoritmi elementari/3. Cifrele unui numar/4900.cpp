#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, p = 1, nr = 0;
    cin >> n;
    while (n) {
        int c = n%10;
        int c1 = n%100;
        if (c1 == 25) {
            nr = nr + (c + 1) * p;
        } else {
            nr = nr + c * p;
        }
        p *= 10;
        n /= 10;
    }
    n = nr;
    cout << n;
    return 0;
}