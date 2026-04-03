#include <bits/stdc++.h>
using namespace std;
void citire(int &n, int a[101]) {
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
}
void afisare(int n, int a[101]) {
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
}
bool prim(int n) {
    if (n < 2) return 0;
    if (n % 2 == 0 && n > 2) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    } return 1;
}
int urmatorul_prim(int n) {
    while (n++) {
        if (prim(n)) {
            return n;
        }
    }
}
void inloc(int n, int a[]) {
    for (int i = 0; i < n; i++) {
        if (!prim(a[i])) {
            a[i] = urmatorul_prim(a[i]);
        }
    }
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, a[1000];
    citire(n, a);
    inloc(n, a);
    afisare(n, a);
    return 0;
}