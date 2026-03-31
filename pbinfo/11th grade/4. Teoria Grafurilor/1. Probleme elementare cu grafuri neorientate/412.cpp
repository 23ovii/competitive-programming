#include <iostream>
#include<fstream>
using namespace std;
int a[101][101];
int main()
{
    int n, m, i, j;
    ifstream fin("adiacenta.in");
    ofstream fout("adiacenta.out");
    fin >> n >> m;
    while (m--) {
        fin >> i >> j;
        a[i][j] = 1;
        a[j][i] = 1;
    }   
    for (int i = 1; i <= n; i++) {
        for (int j = 1 ; j <= n; j++) {
            fout << a[i][j] << " ";
        } fout << "\n";
    }
    return 0;
}