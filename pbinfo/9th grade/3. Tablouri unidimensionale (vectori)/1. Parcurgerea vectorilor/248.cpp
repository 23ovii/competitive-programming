#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("pozitie.in");
    ofstream fout("pozitie.out");
    int n, a[10001], first, p = 1;
    fin >> n >> first;
    for (int i = 2; i <= n; i++) { 
        fin >> a[i];
        if (first > a[i]) p++;
    } fout << p;
    return 0;
}