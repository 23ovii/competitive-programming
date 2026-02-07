#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("blackfriday.in");
    ofstream fout("blackfriday.out");
    
    int n;
    double a[11], b[11], max = -999999, ordine = 0;
    fin >> n;
    for (int i = 1; i <= n; i++) fin >> a[i];
    for (int i = 1; i <= n; i++) fin >> b[i];
    for (int i = 1; i <= n; i++) {
        double reducere = (a[i] - b[i]) * 100.0 / a[i];
        if (reducere > max) {
            max = reducere;
            ordine = i;
        }
    } fout << ordine;
    return 0;
}