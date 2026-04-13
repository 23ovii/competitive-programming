#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int suma = 0;
    int c, b, a;
    c = n % 10;
    b = n / 10 % 10;
    a = ((n / 10) / 10);
    suma = a * a + b * b + c * c;
    cout << suma;
    return 0;
}