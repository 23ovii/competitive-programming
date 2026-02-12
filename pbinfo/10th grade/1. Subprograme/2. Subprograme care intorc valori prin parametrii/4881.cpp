#include <bits/stdc++.h>
using namespace std;
void Plus(int &n) {
    int temp = 0, p = 1;;
    while (n) {
        int cif = n % 10, ncif = n / 10 % 10;
        if (cif == 5 && ncif == 2) {
            temp = temp + (cif + 1) * p;
            p *= 10;
        } else {
            temp = temp + cif * p;
            p *= 10;
        }
        n /= 10;
    } n = temp;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    Plus(n); cout << n;
    return 0;
}