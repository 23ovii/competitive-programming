#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    if (n % 10 == 0 && n / 10 % 10 == 0) {
        cout << n;
    } else {
        n /= 100;
        int c = n % 10;
        c++;
        n /= 10;
        n *= 1000;
        n += (c * 100);
        cout << n;
    }
    return 0;
}