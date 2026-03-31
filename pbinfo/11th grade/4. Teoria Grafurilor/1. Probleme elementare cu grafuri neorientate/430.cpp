#include <iostream>
#include<fstream>

using namespace std;
int a[100][100];
int main()
{
    ifstream fin("izolate.in");
    ofstream fout("izolate.out");
    int n, i, j;
    fin >> n;
    while (fin >> i >> j) {
         if (a[i][j] == 0) {
                a[i][j] = 1;
                a[j][i] = 1;
                a[i][0]++; a[j][0]++;
            }
    } int temp = 0;
    for (i = 1; i <= n; i++) {
        if (a[i][0] == 0) {
            temp++;
        }
    } fout << temp << " ";
    for (i = 1; i <= n; i++) {
            if (a[i][0] == 0) {
                fout << i << " ";
        }
    }
    return 0;
}