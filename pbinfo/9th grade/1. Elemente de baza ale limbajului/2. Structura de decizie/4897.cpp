#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int inverse = 0;
    while (n > 0) {
        int digit = n % 10;
        inverse = inverse * 10 + digit;
        n /= 10;
    }
    if (inverse == n) {
        cout << "DA";
    } else {
        cout << "NU";
    }
    return 0;
}