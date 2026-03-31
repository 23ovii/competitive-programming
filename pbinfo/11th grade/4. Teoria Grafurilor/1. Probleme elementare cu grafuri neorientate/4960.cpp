#include <iostream>
#include<fstream>
using namespace std;
int a[101][101];
int main()
{
        int n, m, i, j, k, p, q;
    ifstream fin("gradepq.in");
    ofstream fout("gradepq.out");
    fin >> n >> p >> q;
    while (fin >> i >> j) {
            if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
            }
        } int nr = 0;
        for (int i = 1; i <= n; i++) {
            if (a[i][0] >= p && a[i][0] <= q) {
                nr++;
            }
        } if (nr == 0) {
        fout << "nu exista";
        } else {
        fout << nr << "\n";
        for (int i = 1; i <= n; i++) {
            if (a[i][0] >= p && a[i][0] <= q) {
                fout << i << " ";
            }
        }
        }
    return 0;
}