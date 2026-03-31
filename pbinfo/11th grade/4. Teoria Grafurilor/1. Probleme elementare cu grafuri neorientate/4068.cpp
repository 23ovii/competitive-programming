#include <iostream>
#include<fstream>
using namespace std;
int a[101][101];
int main()
{
    int n, m, i, j, k, nod = 0;
    ifstream fin("gradek.in");
    ofstream fout("gradek.out");
    fin >> n >> k;
    while (fin >> i >> j) {
            if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
            }
        }
        int p = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i][0] == a[k][0]) {
                p++;
            }
        } fout << p << "\n";
    for (int i = 1; i <= n; i++) {
            if (a[i][0] == a[k][0]) {
                fout << i << " ";
            }
    }
    return 0;
}