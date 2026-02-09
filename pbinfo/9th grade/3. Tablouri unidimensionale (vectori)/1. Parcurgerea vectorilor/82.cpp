#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("minmax.in");
    ofstream fout("minmax.out");

    int n, a[1001];
    long long int min = 9999999999, max = -9999999999;
    fin >> n;
    for (int i = 0; i < n; i++) {
        fin >> a[i];
        if (a[i] > max) max = a[i];
        if (a[i] < min) min = a[i];
    } fout << min << " " << max;
    return 0;
}