#include <bits/stdc++.h>
using namespace std;
int ImparPar (int n) {
    int par = 0, impar = 0, pp = 1, pi = 1;
    while (n) {
        int c = n % 10;
        if (c % 2 == 0) {
            par = par + pp * c;
            pp *= 10;
        } else {
            impar = impar + pi * c;
            pi *= 10;
        }
        n /= 10;
    }
    int rez = impar * pp + par;
    return rez;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    cout << ImparPar(n);
    return 0;
}