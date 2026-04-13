#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int suma = 0;
    while (n) {
        suma += n % 10;
        n /= 10;
    }
    cout << suma;
    return 0;
}