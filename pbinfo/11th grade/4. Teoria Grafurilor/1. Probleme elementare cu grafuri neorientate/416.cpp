#include <iostream>
#include<fstream>
using namespace std;
int a[101][101];
int main()
{
    int n, m, i, j;
    ifstream fin("grade.in");
    ofstream fout("grade.out");
    fin >> n;
    while (fin >> i >> j) {
                a[i][j] = 1;
                a[j][i] = 1;
        }
        for (int i = 1; i <= n; i++) {
            int aux = 0;
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) aux++;
            } fout << aux << " ";
        }
    return 0;
}