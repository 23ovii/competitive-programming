#include <iostream>
#include<fstream>

using namespace std;
int a[101][101], n, k, p;
int main() {
    ifstream fin("gradk.in");
    ofstream fout("gradk.out");
    int i, j;
    fin >> n >> k;
    while (fin >> i >> j) {
         if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
            }
    }
    for (i = 1; i <= n; i++) {
        if (a[i][0] == k) {
            p++;
        }
    } if (p == 0) {
        fout << "NU EXISTA";
        return 0;
    } fout << p << " ";
    for (i = 1; i <= n; i++) {
            if (a[i][0] == k) {
                fout << i << " ";
        }
    }
    return 0;
}