#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n;
    m = n % 100;
    while (n > 99) n /= 10;
    n = n * 100 + m;
    cout << n;
    return 0;
}