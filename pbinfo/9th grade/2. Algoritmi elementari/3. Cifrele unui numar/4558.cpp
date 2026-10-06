#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, c, c1;
    bool egale = 1, cresc = 1, desc = 1;
    cin >> n;
    while (n > 9) {
        c = n % 10;
        c1 = n / 10 % 10;
        if (c != c1) egale = 0;
        if (c >= c1) desc = 0;
        if (c <= c1) cresc = 0;
        n /= 10;        
    }
    if (egale == 1) cout << "egale";
    else if (cresc == 1) cout << "strict crescatoare";
    else if (desc == 1) cout << "strict descrescatoare";
    else cout << "neordonate";
    return 0;
}