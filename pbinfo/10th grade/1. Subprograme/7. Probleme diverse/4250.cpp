#include <bits/stdc++.h>
using namespace std;
void citire(int &n, int a[]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
int suma_div(int n) {
    int suma = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    } return suma;
}
int nr_div(int n) {
    int aux = 0;
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            aux++;
        }
    } return aux;
}
void afisare(int n, int a[]) {
    for (int i = n - 1; i >= 0; i--) {
        cout << suma_div(a[i]) * nr_div(a[i]) << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n, a[1000];
    citire(n, a);
    afisare(n, a);
    return 0;
}