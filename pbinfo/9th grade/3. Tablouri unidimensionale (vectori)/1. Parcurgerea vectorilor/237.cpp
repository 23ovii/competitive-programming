#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("sume.in");
    ofstream fout("sume.out");
    int n, a[101], suma = 0;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a[i];
        suma += a[i];
    }
    for (int i = n - 1; i >= 0; i--) {
        fout << suma << "\n";
        suma -= a[i];
    }
    return 0;
}