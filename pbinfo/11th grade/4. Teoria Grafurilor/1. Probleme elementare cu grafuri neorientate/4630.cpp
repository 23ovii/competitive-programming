#include <iostream>
#include<fstream>
using namespace std;
int a[101][101], n, m, p;
int main() {
    ifstream fin("saturate.in");
    ofstream fout("saturate.out");
    int i, j;
    fin >> n >> m;
    while (fin >> i >> j) {
        if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
        }
    } bool ok = 0;
    if (n % 2 != 0) {
        for (i = 1; i <= n; i++) {
        if (a[i][0] > n / 2) {
            fout << i << " ";
            ok = 1;
        }
    }
    } else {
    for (i = 1; i <= n; i++) {
        if (a[i][0] >= n / 2) {
            fout << i << " ";
            ok = 1;
        }
    }
    } if (!ok) {
        fout << "Nu exista";
    }
    return 0;
}