#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, cif = 0, m, s1 = 0, s2 = 0, p = 0;
    cin >> n;
    m = n;
    while (m){
        cif++;
        m /= 10;
    }
    if (cif % 2 == 0) {
        while (n) {
            if (p < cif / 2) {
                s1 = s1 + n % 10;
            } else {
                s2 = s2 + n % 10;

            }
            n /= 10;
            p++;
        }

    }
    if (s1 == s2) {
        cout << s1;
    } else {
        cout << "NU";

    }
    return 0;
}