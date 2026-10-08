#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    long long p = 1;
    bool ok = 0;
    cin >> n;
    while (n) {
        if ((n % 10) % 2 != 0) {
            p *= n % 10;
            ok = 1;
        }
        n /= 10;
    } if (ok == 0) {
        cout << -1;
    } else {
        cout << p;
    }
    return 0;
}