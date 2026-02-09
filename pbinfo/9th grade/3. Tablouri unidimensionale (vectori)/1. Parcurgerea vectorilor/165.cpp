#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("maxsim.in");
    ofstream fout("maxsim.out");
    int n, a[1001], s = 0, ai, aj, smax = -999999;
    fin >> n;
    for (int i = 1; i <= n; i++) fin >> a[i];
    for (int i = 1; i <= n / 2; i++) {
        s = a[i] + a[n - i + 1];
        if (s > smax) {
            smax = s;
            ai = i;
            aj = n - i + 1;
        }
    } fout << smax << " " << ai << " " << aj << "\n";
    return 0;
}