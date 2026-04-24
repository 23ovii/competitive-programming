#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "Primul copil este mai mare cu " << a - b << " ani";
    } else if (b > a) {
        cout << "Al doilea copil este mai mare cu " << b - a << " ani";
    } else {
        cout << "Copiii au varste egale";
    }
    return 0;
}