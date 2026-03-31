#include <bits/stdc++.h>
using namespace std;
int a[101][101];
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int i, j, max = -1;
    ifstream fin("adiacenta1.in");
    ofstream fout("adiacenta1.out");
    while (fin >> i >> j) {
            a[i][j] = 1;
            a[j][i] = 1;
            if(i>max) max = i;
            if(j>max) max = j;
    }
    for (int i = 1; i <= max; i++) {
        for (int j = 1 ; j <= max; j++) {
            fout << a[i][j] << " ";
        } fout << "\n";
    }
    return 0;
}