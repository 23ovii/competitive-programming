#include <bits/stdc++.h>
using namespace std;
bool pp(int n) {
    while (n >= 100) n /= 10;
    int r = sqrt(n);
    if (r * r == n) return true;
    else return false;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    ifstream fin("elempp.in");
    ofstream fout("elempp.out");
    int n, a[21];
    fin >> n;
    for (int i = 0; i < n; i++) fin >> a[i];
    for (int i = 0; i < n; i++) {
        if (pp(a[i])) fout << a[i] << " ";
    }
    return 0;
}