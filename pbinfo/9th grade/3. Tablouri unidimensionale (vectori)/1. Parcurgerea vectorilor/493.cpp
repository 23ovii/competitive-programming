#include <bits/stdc++.h>
using namespace std;
int sum(int n) {
    int suma = 0;
    while (n) {
        suma += n % 10;
        n /= 10;
    } return suma;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, x[201], y[201], temp = 0;
    cin >> n;
    for (int i = 0; i < n; i++) cin >> x[i];
    for (int i = 0; i < n; i++) {
        int suma = sum(x[i]);
        y[temp++] = x[i] % suma;
    }
    for (int i = 0; i < temp; i++) cout << y[i] << " ";
    return 0;
}