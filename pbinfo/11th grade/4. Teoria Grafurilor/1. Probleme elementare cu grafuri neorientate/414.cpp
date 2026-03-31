#include <iostream>
#include<fstream>
using namespace std;
int a[101][101];
int main()
{
    int n, m, i, j;
    ifstream fin("listavecini.in");
    ofstream fout("listavecini.out");
    fin >> n;
    while (fin >> i >> j) {
            if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
        }
    }
    for (int i = 1; i <= n; i++) {
            fout << a[i][0] << " ";
            for (int j = 1; j <= n; j++) {
                if (a[i][j] == 1) {
                    fout << j << " ";
                }
            } fout << "\n";
    }
    return 0;
}