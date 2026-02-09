#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("maxim4.in");
    ofstream fout("maxim4.out");

    int n, a[101], maxim = -9999, nrmax = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] > maxim) maxim = a[i];
    }
    for (int i = 0; i < n; i++) {
        if (a[i] == maxim) nrmax++;
    } cout << maxim << " " << nrmax;
    return 0;
}