#include <bits/stdc++.h>
using namespace std;
int prime(int n) {
    if (n < 2 ) return 0;
    if (n % 2 == 0 && n > 2) return 0;
    for (int i = 3; i * i <= n; i += 2) {
        if (n % i == 0) {
            return 0;
        }
    } return 1;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("prime.in");
    ofstream fout("prime.out");

    int n, x;
    fin >> n;
    for (int i = 0 ; i < n; i++) {
        fin >> x;
        if (prime(x)) {
            fout << x << " ";
        }
    }
    return 0;
}