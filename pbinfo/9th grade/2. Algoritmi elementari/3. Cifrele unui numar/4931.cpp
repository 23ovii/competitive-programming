#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, max = 0, c, s = 0;
    cin >> n;
    while (n) {
        c = n % 10;
        if (c > max) max = c;
        n /= 10;
        s += c;
    }
    if (s - max == max) cout << "DA " << max;
    else cout << "NU";
    return 0;
}