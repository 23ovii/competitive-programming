#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;
    cin >> a >> b >> c;
    int sa = a % 10 + a / 10 % 10;
    int sb = b % 10 + b / 10 % 10;
    int sc = c % 10 + c / 10 % 10;
    int max = sa;
    if (sb > max) max = sb;
    if (sc > max) max = sc;
    if (sa == max) cout << a << " ";
    if (sb == max) cout << b << " ";
    if (sc == max) cout << c << " ";
    return 0;
}