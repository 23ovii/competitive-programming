#include<bits/stdc++.h>
using namespace std;

int sumcif(int n) {
    if (n == 0) return 0;
    return n % 10 + sumcif(n / 10);
}
int cifmax(int n) {
    if (n < 10) return n;
    int m = cifmax(n / 10);
    int ultima = n % 10;
    if (ultima > m) {
        return ultima;
    } else return m;
}
void citire(int v[], int n) {
    if (n > 0) {
        citire(v, n - 1);
        cin >> v[n - 1];
    }
}
void inloc(int v[], int n) {
    if (n > 0) {
        v[n - 1] = cifmax(v[n - 1]) * sumcif(v[n - 1]);
        inloc(v, n - 1);
    }
}
void afisare(int v[], int n) {
    if (n > 0) {
        afisare(v, n - 1);
        cout << v[n - 1] << " ";
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, v[1000];
    cin >> n;
    citire(v, n);
    inloc(v, n);
    afisare(v, n);
    return 0;
}